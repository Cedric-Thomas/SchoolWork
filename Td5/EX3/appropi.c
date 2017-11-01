#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <unistd.h>

float TirageAleatoire(float N) 
{
	N--;
    float Tirage = rand()%(int)(1000*N-1)+1000;    
    Tirage /= 1000;
    return Tirage;
}
int EstInscrit(float N)
{
	float Tiragex,Tiragey,d;
	Tiragex=TirageAleatoire(N);
	Tiragey=TirageAleatoire(N);
	
	d=sqrt(pow((Tiragex-(N/2)),2)+pow((Tiragey-(N/2)),2));
	if(d<=(N/2))
		return 1;
	else
		return 0;
	
}



int main()
{ 
	srand(42);
	float N,tirage,pi;
	int nbiteration,nb1=0,nb0=0,temp;;
	printf("taille du carré : ");
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
