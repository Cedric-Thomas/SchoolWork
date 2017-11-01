#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a=0,b=0,c=0,delta=0;
	float x,y,z;
		
	printf("Veuillez saisir la valeur a^2 de votre fonction\n");
	scanf("%d",&a);
	
	printf("Veuillez saisir la valeur b de votre fonction\n");
	scanf("%d",&b);

	printf("Veuillez saisir la valeur c de votre fonction\n");
	scanf("%d",&c);
	
	delta = (b*b)-(4*a*c);
	printf("Delta est égal à : %d\n",delta);
	
	
	if (delta < 0)
	{
		printf("Delta est < à 0 donc il n'y a pas de solutions possibles\n");
	}

	if (delta == 0)
	{
		printf("Delta est = à 0 il y a donc 1 solution réelle\n");
		x = -b/(2*a);		
		printf("La solution réelle est -b/2a et le résultat est : %.2f",x);
		printf ("Autre écriture : \n (-%.2f - rac(delta)) / (2*%.2f)\n", b, a);
	}

	if (delta > 0)
	{
		printf("Delta est > à 0 il y a donc 2 solutions réelles\n");
		y = (-b - sqrt(delta))/(2*a);
		z = (-b + sqrt(delta))/(2*a);

		printf("La solution réelle de la forme b + racine de delta / 2a est : %.2f\n",y);
		printf("La solution réelle de la forme b - racine de delta / 2a est : %.2f\n",z);
		printf ("Autre écriture : \n (-%.2f - rac(delta)) / (2*%.2f)\n", b, a);	
	}

	return 0;
}
