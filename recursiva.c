#include <stdio.h>

int recursiva(int n){
    int ah=0;
    if (n<=5)
    {
      return 1;
    }
    else
    {
      ah = 5 * recursiva(n-2);
      printf("%d\n",ah );
    }
    return ;
}



int main() {
  int numero;

  printf("Introduzca el numero que desea hacer\n" );
  scanf("%d",&numero );
  printf("1\n" );
  printf("\n%d\n",recursiva(numero) );

  return 0;
}
