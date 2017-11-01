#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int main()
{
	int heure=0,jus=2,i=0;
	float degre=40,tmp =0;

	printf("A quelle heure voulez vous connaitre de dégré d'alcool?\n");
	scanf("%d",&heure);

	for(i=0; i<heure; i++)
	{
		tmp= (degre)/jus;
		degre = degre-tmp;	
		jus =4;
	}

	printf("le degré d'alcool est de : %f\n",degre);
}
