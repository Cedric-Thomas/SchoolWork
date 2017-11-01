#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int rnd(int x)
{
  int rnd_nmb;
  do
  {
    rnd_nmb = (rand()%x)+1;
  }while(rnd_nmb < 10000);
  return rnd_nmb;
}
int main()
{
  int asw = rnd(50000), val;
  clock_t time = 0;
  do
  {
    time += clock();
    printf("Quel est le prix ?");
    scanf("%d",&val);
    if(val < asw)
      printf("C'est plus !\n");
    if(val > asw)
      printf("C'est moins !\n");
  }while((val != asw) && ((time/1000) < 45));
  if (time > 45000)
    printf("Et c'est perdu quel dommage !!");
  else
    printf("Et c'est gagné vous remportez tous le flouz !!");
  return 0;
}
