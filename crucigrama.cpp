#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
  int aguante, num_filas, diamantes[1000],suma1,suma2, acumulado=0;

  scanf("%d",&num_filas );
  printf("Ingrese los diamantes en cada fila");
  for (int i = 0; i < num_filas; i++) //Se pi
  {
    scanf("%d",&diamantes[i] );
  }
  printf("Ingrese el aguante del pico");
  scanf("%d",&aguante );

  for (int i = 0; i < aguante; i++)
  {
    suma2=0;
    for (int j = 0; j <= aguante; j++)
    {
    suma1=diamantes[j]+diamantes[j+1];
    suma2=suma1+suma2;
    printf("\nsuma%d\n",suma2 );
    if (i>=1)
    {
      j++;
    }
    }



    if (suma2>acumulado)
    {
      acumulado=suma2;
    }
    printf("\nacumulado%d\n",acumulado );



  }






  return 0;
}
