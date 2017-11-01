#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int my_rand(int min, int max)
{
    int rnd_nmb = 0;
    while (rnd_nmb < min)
    rnd_nmb = rand()%max+1;
    return rnd_nmb;
}
int main (int argc, char **argv)
{
    if(argc < 3)
    {
        printf("NOT_ENOUGH_ARGS\n");
        return 1;
    }
    int seed = time(NULL), min, max;
    if (atoi(argv[1])>atoi(argv[2]))
      min = atoi(argv[2]), max = atoi(argv[1]);
    else
      min = atoi(argv[1]), max = atoi(argv[2]);
    srand(seed);
    printf("%d",my_rand(min,max));
    return 0;
}
