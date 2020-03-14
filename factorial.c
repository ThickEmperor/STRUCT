#include <stdio.h>

int factorial(int n){

    if (n==0)
      return 1;
    else
      return n * factorial(n-1); //aquí se hace el factorial siguiendo la fórmula
}



int main() {
  int numero;

  printf("Introduzca el numero que desea hacer factorial\n" );
  scanf("%d",&numero );
  printf("\n%d\n",factorial(numero) );

  return 0;
}
