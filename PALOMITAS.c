
#include <stdio.h>

int main() {
  int mes1,mes2,acumulado1,acumulado2;

  printf("\nIntroduce el mes donde se compraron palomitas grandes");
  scanf("%d",&mes1 );
  printf("\nIntroduce el mes donde gustas saber si irá al cine");
  scanf("%d",&mes2 );
  acumulado2=mes1;
  acumulado1=mes1+4;
  if (acumulado1==mes2) {
    printf("\nirás al cine ese mes y compraras palomitas grandes\n");
  }if (acumulado1!=mes2) {
    acumulado1=acumulado1+4;
    if (acumulado1==mes2) {
      printf("\nirás al cine ese mes y compraras palomitas grandes\n");
    } if (acumulado1!=mes2) {
        for (int i = 0; i <= 5; i++) {

        mes1=mes1+2;
        if (mes1==mes2) {
          printf("\nIras al cine pero compraras palomitas chicas\n");
        }

      }
        acumulado2=acumulado2+1;
      for (int i = 0; i <= 5; i++) {
        if (acumulado2==mes2) {
          printf("\nNo iras al cine\n");
          }
        acumulado2=acumulado2+2;

    }

  }
  }















  return 0;
}
