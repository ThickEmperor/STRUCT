#include <stdio.h>

#define TAMANIO_ARRAY 1000

void array() { //funcion que revierte la cadena
  char arreglo_inv[TAMANIO_ARRAY] = {0}, arreglo[TAMANIO_ARRAY]= {0};
  printf("Introduzca el texto a revertir: ");

  fgets(arreglo, TAMANIO_ARRAY, stdin); //se lee la cadena a revertir

  printf("Su texto revertido es ");
  
  printf("\n\n");
  for (int i = 0; i <= TAMANIO_ARRAY; i++) // for para revertir la cadena
  {
    printf("%c",arreglo[TAMANIO_ARRAY-i]);
  }

  printf("\n\n");
}


int main() { //funcion principal

  printf("\n\n\n\n\t\t|||Programa para revertir texto|||\n\n\n\n" );
  array();
  return 0;
}
