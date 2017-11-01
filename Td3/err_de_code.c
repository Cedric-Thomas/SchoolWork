#include <stdlib.h>
#include <stdio.h>

int main()
{
  int i, j;
  for(i=0, j=1; i>3; i++, j+=2)
    printf("i=%d, j=%d\n",i,j);
  if (i==j)
    i=2*j;
  else
    printf("%d\n",j);
  printf("Au revoir\n");
  return 0;
}
