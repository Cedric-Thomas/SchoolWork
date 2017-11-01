#include <stdlib.h>
#include <stdio.h>

int multiplication(int a, int b)
{
  return a*b;
}

int main (int argc, char **argv)
{
  if(argc<4)
  {
    printf("NOT ENOUGH ARGUMENTS");
    return 1;
  }
  else
  {
    int nmb1 = atoi(argv[1]), nmb2 = atoi(argv[2]), nmb3 = atoi(argv[3]);
    printf("%d\n",multiplication(nmb1,nmb2));
    printf("%d\n",multiplication(nmb1,(nmb2+nmb3)));
    printf("%d\n",multiplication(nmb1,multiplication(nmb2, nmb3)));
    int tmp = nmb1;
    if (nmb2 == 0)
      tmp = 1;
    else
    {
      for (; nmb2>1; nmb2--)
        tmp=multiplication(tmp, nmb1);
    }
    printf("%d\n",tmp);
    tmp = 1;
    for(; nmb1>1; nmb1--)
      tmp = multiplication(tmp, nmb1);
    printf("%d",tmp);
    return 0;
  }
}
