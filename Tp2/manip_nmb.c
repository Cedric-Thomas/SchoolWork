#include <stdio.h>
#include <stdlib.h>

int Miror(int N)
{
  int tmp, N_rev=0;
  while(N != 0)
    {
        tmp = N%10;
        N_rev = N_rev*10 + tmp;
        N /= 10;
    }
  return N_rev;
}

int NbDigit(int N)
{
  int nmb_digit = 0;
  while (abs(N) > 0)
  {
    nmb_digit++;
    N /= 10;
  }
  return nmb_digit;
}

int Palindromize(int N)
{
  int palintruc = N, i, n10 = 1;
  for (i=0; i < NbDigit(N)-1; i++)
  {
    n10 = n10 * 10;
  }
  return (palintruc*n10)+Miror(N/10);
}

int main (int argc, char **argv)
{
  if(argc != 2)
  {
    printf("Program need 1 args only/maxi");
    return 1;
  }
  else
  {
    int N = atoi(argv[1]);
    printf("Nombre en mirroir: %d\n", Miror(N));
    printf("Nombre de chiffre: %d\n", NbDigit(N));
    printf("Palindrome: %d\n", Palindromize(N));
  }
}
