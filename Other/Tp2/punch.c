#include <stdio.h>
#include <stdlib.h>

float je_bois(float alcool)
{
  alcool -= ((alcool)/4);
  return alcool;
}
int main()
{
  int hour=20;
  float alcool = 20;
  printf("Il est %dH est le punch est a %g degree\n", hour, alcool);
  while(hour<25)
  {
    hour++;
    alcool=je_bois(alcool);
    printf("Il est %dH est le punch est a %g degree\n", hour, alcool);
  }
}
