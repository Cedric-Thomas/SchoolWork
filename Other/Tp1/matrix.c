#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int rnd()
{
  int rnd_state = rand()%2;
  return rnd_state;
}
int main(int argc, char **argv)
{
  if(argc < 2)
  {
    printf("NOT ENOUGH ARGUMENTS");
    return 1;
  }
  else
  {
    srand(time(NULL));
    int cols = atoi(argv[1]),i;
    while(1)
    {
      for(i=0;i<cols;i++)
      {
        if(rnd())
          printf("*");
        else
          printf(" ");
      }
      printf("\n");
    }
  }

}
