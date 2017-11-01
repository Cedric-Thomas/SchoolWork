#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <termio.h>
#include <unistd.h>
#include <fcntl.h>

void CompteARebours(int duree) 
{
    clock_t start = clock();
    while((clock()-start)/CLOCKS_PER_SEC < duree);
    return;
}

double TempsAleatoire(int max) 
{
    double time = rand()%(1000*max+1)+1000;    
    time /= 1000;
    return time;
}

void DeroulerJeu(int duree)
{
    printf("Bienvenue dans STIMULUS\n");
    for(int i = 3; i > 0; i--) 
    {
        printf("Début dans %d\n", i);
        CompteARebours(1);
    }
    
    CompteARebours(TempsAleatoire(10));
    printf("STIMULUS\n");
    clock_t startClock = clock();
    clock_t startDraw = clock();
    while(kbhit() != 1 && (clock()-startClock)/CLOCKS_PER_SEC < duree) 
    {
        if((double)(clock()-startDraw)/CLOCKS_PER_SEC >= duree/20.) 
        {
            printf("#");
            startDraw = clock();
        }
    }
    double reactionTime = (double)(clock()-startClock)/CLOCKS_PER_SEC;
    printf("\nTemps de réaction: %g secondes\n", (double)reactionTime);
    if(reactionTime >= duree)
        printf("Vous dormez ?\n");
    else if(reactionTime > 2)
        printf("Vous êtes plutôt lent\n");
    else if(reactionTime > 0.5)
        printf("Ca passe\n");
    else if(reactionTime > 0.2)
        printf("Vous êtes rapide !\n");
    else
        printf("Vous allez plus vite que la lumière !\n");
}

int main() 
{
    srand(time(NULL));
    system("clear");

    DeroulerJeu(3);

    return 0;
}

