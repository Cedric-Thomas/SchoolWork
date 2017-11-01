#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float delta(float a, float b, float c)
{
  return ((b*b)-(4*a*c));
}

int nmb_de_sol(float delta)
{
  if(delta >= 0)
  {
    if(delta > 0)
    {
      return 2;
    }
    else
    {
      return 1;
    } 
  }
  else
  {
    return 0;
  }
}

int main(int argc, char **argv)
{
  float a, b, c;
  printf("Saisir a:");
  scanf("%f",&a);
  printf("Saisir b:");
  scanf("%f",&b);
  printf("Saisir c:");
  scanf("%f",&c);
  int delt=nmb_de_sol(delta(a,b,c));
  if (delt != 0)
  {
    if(delt == 2)
    {
      float x1, x2;
      x1=(-b-sqrt(delt))/(2*a);
      x2=(-b+sqrt(delt))/(2*a);
      printf("Les 2 solutions sont x1= %f et x2= %f \n",x1,x2);
    }
    if(delt == 1)
    {
      float x1 = -b/(2*a);
      printf("L'unique solution est x1= %f\n",x1);
    }
  }
  else
    printf("Il n'y a aucune solution reelle\n");
  return 0;
}
