#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int LADOS = 6;

int main(){
  int numero[3600]={0},numero2[3600]={0},suma, almacenamiento[11]={0},basura1,basura2;
  char resp;


  printf("\t\tD A D O M A T I C 2.0" );
  printf("\tD A D O M A T I C 2.0" );
  printf("\t\tD A D O M A T I C 2.0" );
  printf("\tD A D O M A T I C 2.0" );
  printf("\t\tD A D O M A T I C 2.0" );
  printf("\tD A D O M A T I C 2.0" );
  printf("\t\tD A D O M A T I C 2.0" );
  printf("\tD A D O M A T I C 2.0 " );
  printf("\t\tD A D O M A T I C 2.0" );
  printf("\tD A D O M A T I C 2.0" );
  printf("\n\nPresiona enter para tirar los dados" );
  getchar();
  for (size_t i = 0; i < 36000; i++)
  {

    suma=0;

    for(int i = 0; i < 2 ; i++){
            suma += ((rand() % 6) + 1);
        }

    switch (suma)
    {
      case 2:
        almacenamiento[0]++;
      break;
      case 3:
        almacenamiento[1]++;
      break;
      case 4:
        almacenamiento[2]++;
      break;
      case 5:
        almacenamiento[3]++;
      break;
      case 6:
        almacenamiento[4]++;
      break;
      case 7:
        almacenamiento[5]++;
      break;
      case 8:
        almacenamiento[6]++;
      break;
      case 9:
        almacenamiento[7]++;
      break;
      case 10:
        almacenamiento[8]++;
      break;
      case 11:
        almacenamiento[9]++;
      break;
      case 12:
        almacenamiento[10]++;
      break;

    }
  }
  printf("2\t3\t4\t5\t6\t7\t8\t9\t10\t11\t12\n" );
  printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",almacenamiento[0],almacenamiento[1],almacenamiento[2],almacenamiento[3],almacenamiento[4],almacenamiento[5],almacenamiento[6],almacenamiento[7],almacenamiento[8],almacenamiento[9],almacenamiento[10]);
  return 0;
}
/*
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){

    int suma = 0;
    int sums[13] = {0};

    srand((unsigned) time(0));

    for(int j = 1; j <= 36000; j++){
        suma = 0;
        for(int i = 0; i < 2 ; i++){
            suma += ((rand() % 6) + 1);
        }
        sums[suma]++;
    }

    printf("%7s%13s\n", "Suma", "# Veces");

    for(int i = 2; i <= 12; i++){
        printf("%7u%13d\n", i, sums[i]);
    }

    return 0;
}
*/
