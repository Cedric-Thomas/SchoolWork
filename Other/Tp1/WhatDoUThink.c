#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rnd()
{
    int seed = time(NULL);
    srand(seed);
    int rnd_num = rand()%5+1;
    return rnd_num;
}

int main()
{
    int i, input, nbm = rnd();
    for(i=0; i<3; i++)
    {
        printf("A quel nombre je pense? ");
        scanf("%d",&input);
        if (input == nbm)
        {
            printf("Gagne!\n");
            return 0;
        }
        else
            printf("Rate -_-'\n");
    }
    printf("T'est trop nul ptdr O_O\n");
    printf("C'etait %d\n", nbm);
    return 0;
}
