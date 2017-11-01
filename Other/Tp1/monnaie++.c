#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rnd()
{
    int seed = time(NULL);
    srand(seed);
    int prix_de_obj = rand()%100+1;
    return prix_de_obj;
}

void disek(float a)
{
  int a500, a200, a100, a50, a20, a10, a2, a1;
}

int main()
{
    float monnaie = 0, rendu = 0, prix_de_obj = rnd();
    printf("Montant a Payer: %g euro(s)\n",prix_de_obj);
    printf("Vous donnez: ");
    scanf ("%f",&monnaie);
    rendu = monnaie - prix_de_obj; 
    if (monnaie < 0)
    {
        printf("Il est interdit de voler de l'argent !!\n");
    }
    else
    {
        if (monnaie >= prix_de_obj)
        {
            disek(rendu);
        }
        else
        {
            prix_de_obj -= monnaie;
            printf("Il manque: %g euro(s)\n", prix_de_obj);
        }
    }
    return 0;
} 
