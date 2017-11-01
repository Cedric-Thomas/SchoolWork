#include <stdio.h>
#include <math.h>


float racA (int u0,int a,float seuil)
{
	float	u=u0,u1;
	u1=u;
	do
	{
		u=u1;
		u1=0.5*(u+(a/u));
		
	}while(u-u1<=seuil);
	return u1;
}

int main()
{
int a,u0;
float u,seuil;
	printf("entre a: ");
	scanf("%d",&a);
	printf("entre u0: ");
	scanf("%d",&u0);
	printf("entre le seuil: ");
	scanf("%f",&seuil);
	
	u=racA(u0,a,seuil);
	printf("pour u0= %d l'approximation de racine de %d au seuil de %.02f vaut : %f\n",u0,a,seuil,u);
	return 0;
}

