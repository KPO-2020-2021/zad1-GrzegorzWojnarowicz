#include <stdio.h>

/* w c extern działa poprawnie, a w c++ stwierdza że jest niezdefiniowana referencja do zmiennych */

extern const double PI;
extern const double E;


int main()
{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}
