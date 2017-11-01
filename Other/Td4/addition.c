#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long add(int nmb1, int nmb2)
{
    long res = nmb1 + nmb2;
    return res;
}
int main (int argc, char **argv)
{
    int seed = time(NULL), nmb1, nmb2;
    srand(seed);
    if (argc<=2)
    {
        if (argc==2)
        {
            nmb1 = atoi(argv[1]);
            nmb2 = rand();
        }
        else
        {
            nmb1 = rand();
            nmb2 = rand();
        }
    }
    else
    {
        nmb1 = atoi(argv[1]), nmb2 = atoi(argv[2]);
    }
    long res = add(nmb1, nmb2);
    printf("%ld\n",res);
    return 0;
}
