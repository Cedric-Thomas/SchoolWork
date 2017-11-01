#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
  srand(time(NULL));
  int ans = (rand()%100+1), val, try = 0;
  do
  {
    scanf("%d",&val);
    try++;
    if(try>=1)
      printf("Nop, Cherche Encore...\n");
  } while(val!=ans);
  printf("Gg, Nbm de try: %d",try);
}
