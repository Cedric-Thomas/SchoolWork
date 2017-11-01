#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <unistd.h>

float TirageAleatoire(float N) 
{
	  N--;
    float tirage = rand()%(int)(1000*N-1)+1000;    
    tirage /= 1000;
    return tirage;
}
int EstInscrit(float N)
{
	float tiragex,tiragey,d;
	tiragex=TirageAleatoire(N);
	tiragey=TirageAleatoire(N);
	
	d=sqrt(pow((tiragex-(N/2)),2)+pow((tiragey-(N/2)),2));
	if(d<=(N/2))
		return 1;
	else
		return 0;
	
}



int main()
{ 
	srand(time(NULL));
	float N,pi;
	int nbiteration,nb1=0,nb0=0,temp;
	printf("taille du carre : ");
	scanf("%f",&N);
	printf("nombre d'iteration: ");
	scanf("%d",&nbiteration);
	
	for(int i=0;i<nbiteration;i++)
	{
		temp=(int)EstInscrit(N);
		printf("%d\n",temp);
		if(temp==1)
			nb1++;
		else
			nb0++;
			
	}
	
	pi=(nb1/(float)nbiteration)*(float)pow(N,2);
	printf("pi vaut:%f\n",pi);
	return 0;
}

