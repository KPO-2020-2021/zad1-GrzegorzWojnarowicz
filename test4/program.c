#include <stdio.h>


double Dodaj();
/* dla jezyka c program działa poprawnie a w c++ w deklaracja funkcji powinna wyglądać tak: Dodaj(double, double) */

int main( )
{
  double  Skl1 = 2.0,  Skl2 = 2.0;
  double  Wynik = Dodaj(Skl1,Skl2);

  printf("  Wynik dodawania:  %f + %f = %f\n",Skl1,Skl2,Wynik);

  return 0;
}
