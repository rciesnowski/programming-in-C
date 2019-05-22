#include<stdio.h>

int main()
{
  char msg, zywe, miekkie, lekkie;
  
  printf("Wybierz jeden z ośmiu poniższych rzeczowników, wcisnij ENTER i odpowiedz na trzy pytania:\n\n");
  printf("nosorozec  klebek  mysz  zuk  kowadlo  materac  dlugopis  mis\n");
  scanf("%c", &msg);
  printf("1. Czy jest zywe? (t/n)\n");
  scanf("%c", &zywe);
  scanf("%c", &msg);  
  printf("2. Czy jest miekke? (t/n)\n");
  scanf("%c", &miekkie);
  scanf("%c", &msg);
  printf("3. Czy jest lekkie? (t/n)\n");
  scanf("%c", &lekkie);
  scanf("%c", &msg);

  if (zywe == 't' && miekkie == 't' && lekkie == 't') {
    printf( "\nMyslales o myszy\n" );
  }
  else if (zywe == 't' && miekkie == 't' && lekkie == 'n') {
    printf( "\nMyslales o misiu\n" );
  }
  else if (zywe == 't' && miekkie == 'n' && lekkie == 't') {
    printf( "\nMyslales o zuku\n" );
  }
  else if (zywe == 't' && miekkie == 'n' && lekkie == 'n') {
    printf( "\nMyslales o nosorozcu\n");
  }
  else if (zywe == 'n' && miekkie == 't' && lekkie == 't') {
    printf( "\nMyslales o klebku\n" );
  }
  else if (zywe == 'n' && miekkie == 't' && lekkie == 'n') {
    printf( "\nMyslales o materacu\n" );
  }
  else if (zywe == 'n' && miekkie == 'n' && lekkie == 't') {
    printf( "\nMyslales o dlugopisie\n" );
  }
  else if (zywe == 'n' && miekkie == 'n' && lekkie == 'n') {
    printf( "\nMyslales o kowadle\n" );
  }
  else {
    printf( "ERROR\n");
  }

  return 0;
}

