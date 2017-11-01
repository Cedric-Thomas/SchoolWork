#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <termios.h>
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

int kbhit(void)
{
  struct termios oldt, newt;
  int ch;
  int oldf;
 
  tcgetattr(STDIN_FILENO, &oldt);
  newt = oldt;
  newt.c_lflag &= ~(ICANON | ECHO);
  tcsetattr(STDIN_FILENO, TCSANOW, &newt);
  oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
  fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);
 
  ch = getchar();
 
  tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
  fcntl(STDIN_FILENO, F_SETFL, oldf);
 
  if(ch != EOF)
  {
    ungetc(ch, stdin);
    return 1;
  }
 
  return 0;
}

void DeroulerJeu(int duree)
{
    printf("Bienvenue dans STIMULUS, nous allons tester votre temps de réaction\n");
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
