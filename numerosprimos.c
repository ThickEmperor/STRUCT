#include <stdio.h>
#include <stdlib.h>

int main() {
  int limite=0, contador, es_primo=1;
  char c;

  printf("\nHasta que numero deseas calcular los numeros primos\n" );
  scanf("%d",&limite );
  fflush(stdin);
  printf("Los numeros primos que hay entre 2 y %d son:\n", limite);
  for (int i = 2; i <= limite; i++)
  {

    for (int j = 2; j < i; j++) {

      es_primo=1;
      if (i%j==0) {

        es_primo=0;
        break;
      }


    }

    if (es_primo) {
      printf("-. %d\n",i );

    }
  }





  return 0;
}
