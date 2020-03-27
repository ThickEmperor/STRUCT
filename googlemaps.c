#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  float grado=0,minuto=0,segundo=0,res1=0,res2=0;
  char card_lat[10],card_lon[10];

  printf("\n\tLatitud: " );
  fgets(card_lat,9,stdin);
  
  printf("\nGrados: " );
  scanf("%f",&grado);
  if (grado<-90||grado>90) {
    printf("\nGrado invalido" );
    return 0;
  }
  printf("\nMinutos: " );
  scanf("%f",&minuto);
  printf("\nSegundos: " );
  scanf("%f",&segundo);
  res1=grado+(minuto/60)+(segundo/3600);
  if (card_lat[0]=='S'||card_lat[0]=='s'||card_lat[0]=='O'||card_lat[0]=='o')
    res1=res1-res1*2;

  grado=0;
  minuto=0;
  segundo=0;

  printf("\n\tLongitud: " );
  fflush(stdin);
  fgets(card_lon,9,stdin);
  if(card_lat[0]==card_lon[0]||(card_lon[0]=='s'&&card_lat[0]=='n')||(card_lon[0]=='e'&&card_lat[0]=='o'))
  {
    printf("\ncardinalidad invalida" );
    return 0;
  }
  printf("\nGrados: " );
  scanf("%f",&grado);
  if (grado<-180||grado>180)
  {
    printf("\nGrado invalido" );
    return 0;
  }
  printf("\nMinutos: " );
  scanf("%f",&minuto);
  printf("\nSegundos: " );
  scanf("%f",&segundo);
  res2=grado+(minuto/60)+(segundo/3600);
  if (card_lon[0]=='S'||card_lon[0]=='s'||card_lon[0]=='O'||card_lon[0]=='o')
    res2=res2-res2*2;

  printf("\n\nLa dirección de google maps es:\n" );
  printf("\nhttps://maps.google.com/maps/place/%f,%f\n\n",res1,res2 );

  return 0;
}
