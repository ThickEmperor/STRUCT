#include <stdio.h>
#include <string.h>

struct persona{
  char nombre[100];
  unsigned short int edad;
  char sexo;
  unsigned long int id_persona;
  char direccion[100], escolaridad[20],religion[50];

} Persona;




int main() {
  struct persona a;

  printf("\nBuenas tardes, presione enter para ingresar sus datos\n" );

  printf("\nIngrese su id :" );
  scanf("%d",&a.id_persona );
  fflush(stdin);
  printf("\nIngrese su nombre completo:" );
  fgets(a.nombre, 99, stdin);
  printf("\nIngrese su edad:" );
  scanf("%d", &a.edad );
  printf("\nIngrese su estatura :" );
  scanf("%c",&a.estatura );
  fflush(stdin);
  printf("\nIngrese su dirección :" );
  fgets(a.direccion, 99, stdin);
  printf("\nIngrese su religion :" );
  fgets(a.religion, 99, stdin);
  printf("\nIngrese su escolaridad :" );
  fgets(a.escolaridad, 99, stdin);

  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n" );
  printf("\nConfirme que sus datos sean correctos" );
  printf("\nSu id es: %d",a.id_persona );
  printf("\nSu nombre es: %s",a.nombre );
  printf("\nSu edad es: %d",a.edad );
  printf("\nSu estatura es: %c",a.edad );
  printf("\nSu direccion es: %s",a.direccion );
  printf("\nSu religion es: %s",a.religion );
  printf("\nSu escolaridad es: %s",a.escolaridad );
  getchar();
  printf("\nPresione enter para confirmar");

  return 0;
}
