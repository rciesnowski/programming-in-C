#include <stdio.h>
int main(){
 
    char s[] = "abcdE";
    int y;
    asm volatile(
    ".intel_syntax noprefix;"
 
    "mov ebx, %1;" // wrzuca pierwszą wartosc do ebx
    "xor ecx, ecx;" // zeruje ecx
    "petla:"
        "mov al, [ebx];" // rzuca wwartosc ebx do rejestru al
        "cmp al, 0;" 
        "je koniec;" // jesli koniec stringa to konczy
        "inc ecx;" // sledzi dlugosc stringa
        "inc ebx;" // wskaże mi ostatni element  
        "jmp petla;"
    "koniec:"
        "mov ebx, %1;"  // string do ebx
        "mov esi, ebx;" // wrzucam ebx do esi
        "add ebx, ecx;" // adres ostatniego znaku
        "mov edi, ebx;" // kopia ebx
        "dec edi;" // ostatni znak będzie zerem więc nieistotny
     "odwroc:"
        "mov al, [esi];" // poczatkowa wartosc do al
        "mov bl, [edi];" // koncowa do bl
        "mov [esi], bl;"
        "mov [edi], al;" // zamieniam poczatkowa z koncową i odwrotnie
        "inc esi;" // przechodzi na nastepna na poczatku
        "dec edi;" // przechodzi na poprzednia na koncu
        "dec ecx;"
        "dec ecx;" // redukujemy dlugosc stringa o dwie krancowe wartosci
        "cmp ecx,0;"
        "jg odwroc;" // jezeli wciąż cos zostało to kontynuujemy
 
    ".att_syntax prefix;"
    : "=r" (y)
    : "r" (s)
    : "eax", "ebx", "ecx"
    );
    printf("odwrocony %s\n", s);
    return 0;
}  

