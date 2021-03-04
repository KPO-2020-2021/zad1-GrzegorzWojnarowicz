#include <stdio.h>

/* kompiluje się w gcc, natomiast w g++ nie */

extern const double PI;
extern const double E;


int main()
{
  printf("  PI: %f\n",PI);
  printf("   E: %f\n",E);
  return 0;
}
