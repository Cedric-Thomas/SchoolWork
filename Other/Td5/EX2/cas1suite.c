#include <stdio.h>
	#include <math.h>


float racA (int u0,int rang,int a)
{
	float	u=u0;
	for(int i=0;i<=rang;i++)
	{
		u=0.5*(u+(a/u));
	}
	return u;
}

int main()
{
int a,rang,u0;
float u;
	printf("entre a: ");
	scanf("%d",&a);
	printf("entre le rang: ");
	scanf("%d",&rang);
	printf("entre u0: ");
	scanf("%d",&u0);
	
	u=racA(u0,rang,a);
	printf("pour u0= %d et le rang : %d l'approximation de racine de %d vaut : %f\n",u0,rang,a,u);
	return 0;
}
