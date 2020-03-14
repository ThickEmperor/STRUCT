#include <stdio.h>

int main() {
  int dia = 0, mes=0;


  printf("\n| | | S I G N O  Z O D I A C A L | | |\n" );
  printf("\t| | | S I G N O  Z O D I A C A L | | |\n" );
  printf("| | | S I G N O  Z O D I A C A L | | |\n" );

  printf("\t\nCual es tu día de nacimiento? " );
  scanf("%d",&dia );
  printf("\n\tCual es tu mes de nacimiento? " );
  scanf("%d",&mes );
  //if (dia>=1&&dia<=31&&mes>=1&&mes<=12) {
  printf("\n" );
  switch (mes)
  {
    case 1: //ener0
    if (dia>=0&&dia<=19)//del 0 al 19 de enero es capri
    {
      printf("Capricornio");
      printf("\nInvierno");
    }
    if (dia>=20&&dia<=31) // del 20 al 31 de enero es acuario
    {
      printf("Acuario");
      printf("\nInvierno");
    }
    break;
    case 2: //febrero
    if (dia>=30) {
      return 0;
    }
    if (dia>=0&&dia<=18) //del 0 al 18 de de feb es acuario
    {
      printf("Acuario");
      printf("\nInvierno");
    }
    if (dia>=19&&dia<=29) //del 19 al 29 de de feb es piscis
    {
      printf("Piscis");
      printf("\nInvierno");
    }
    break;
    case 3: //marzo
    if (dia>=0&&dia<=20) //del 0 al 20 de de marzo es piscis
    {
      printf("Piscis");
      printf("\nInvierno");
    }
    if (dia>=21&&dia<=31) //del 21 al 31 de  mar es aries
    {
      printf("Aries");
      printf("\nPrimavera");
    }
    break;
    case 4: //abril
    if (dia>=0&&dia<=19) //del 0 al 19 de abr es aries
    {
      printf("Aries");
      printf("\nPrimavera");
    }
    if (dia>=20&&dia<=30) //del 20 al 31 de abril es tauro
    {
      printf("Tauro");
      printf("\nPrimavera");
    }
    break;
    case 5: //mayo
    if (dia>=0&&dia<=20) //del 0 al 20 de mayo es tauro
    {
      printf("Tauro");
      printf("\nPrimavera");
    }
    if (dia>=21&&dia<=31) //del 21 al 31 de mayo es geminis
    {
      printf("Geminis");
      printf("\nPrimavera");
    }
    break;
    case 6: //junio
    if (dia>=0&&dia<=20) //del 0 al 20 de junio es geminis
    {
      printf("Geminis");
      printf("\nPrimavera");
    }
    if (dia>=21&&dia<=30&&dia!=19) //del 21 al 30 de junio es cancer
    {
      printf("Cancer");
      printf("\nVerano");
    }
    break;
    case 7: //julio
    if (dia>=0&&dia<=22) //del 0 al 22 de julio es cancer
    {
      printf("Cancer");
      printf("\nVerano");
    }
    if (dia>=23&&dia<=31) //del 23 al 31 de julio es leo
    {
      printf("Leo");
      printf("\nVerano");
    }
    break;
    case 8: //agosto
    if (dia>=0&&dia<=22) //del 0 al 22 de agosto es leo
    {
      printf("Leo");
      printf("\nVerano");
    }
    if (dia>=23&&dia<=31) //del 23 al 31 de agosto es virgo
    {
      printf("Virgo");
      printf("\nVerano");
    }
    break;
    case 9: //septiembre
    if (dia>=0&&dia<=22) //del 0 al 22 de septiembre es virgo
    {
      printf("Virgo");
      if (dia>=0&&dia<=20)
      {
        printf("\nVerano");
      }
      if (dia>=21)
      {
        printf("\nOtono");
      }
    }
    if (dia>=23&&dia<=30) //del 23 al 30 de sep es libra
    {
      printf("Libra");
      printf("\nOtono");
    }
    break;
    case 10: //octubre
    if (dia>=0&&dia<=22) //del 0 al 22 de oct es libra
    {
      printf("Libra");
      printf("\nOtono");
    }
    if (dia>=23&&dia<=31) //del 23 al 31 de oct es escorpio
    {
      printf("Escorpion");
      printf("\nOtono");
    }
    break;
    case 11: //noviembre
    if (dia>=0&&dia<=21) //del 0 al 21 de nov es escorpio
    {
      printf("Escorpion");
      printf("\nOtono");
    }
    if (dia>=22&&dia<=30) //del 23 al 30 de nov es sagitario
    {
      printf("Sagitario");
      printf("\nOtono");
    }
    break;
    case 12: //diciembre
    if (dia>=0&&dia<=21) //del 0 al 21 de dic es sagitario
    {
      printf("Sagitario");
      if (dia>=0&&dia<=20) {
        printf("\nOtono");
      }
      if (dia>=21)
      {
        printf("\nInvierno");
      }
    }
    if (dia>=22&&dia<=31) //del 23 al 31 de dic es Capricornio
    {
      printf("Capricornio");
      printf("\nInvierno");
    }
    break;
  }
  printf("\n\n" );


//}


  return 0;
}
