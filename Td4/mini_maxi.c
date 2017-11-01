#include <stdio.h>
#include <stdlib.h>

int max(int a, int b)
{
  if(a>=b)
    return a;
  else
    return b;
}

int min(int a, int b, int c)
{
  if(a<=b)
  {
    if(a<=c) return a;
    else return c;
  }
  else
  {
    if(b<=c) return b;
    else return c;
  }

}

int main(int argc, char **argv)
{
  if(argc < 4)
  {
    printf("NOT ENOUGH ARGUMENTS");
    return 1;
  }
  else
  {
    int nmb1 = atoi(argv[1]), nmb2 = atoi(argv[2]), nmb3 = atoi(argv[3]);
    printf("Le nombre max est %d\n", max(max(nmb1,nmb2), nmb3));
    printf("Le nombre min est %d", min(nmb1,nmb2,nmb3)); 
  }
}
