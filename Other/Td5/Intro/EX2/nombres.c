#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


int mirror(int n)
{
	int b=0,tmp=0;	
	while(n>0)
	{
		b=b*10;	
		tmp = n%10;
		n=n/10;
		b=b+tmp;	
	}
	return b;
}


int digit(int n)
{
	int b = 0;
	while(abs(n) > 0)
	{		
		b++;		
		n = n/10;
	}
	return b;
}


int palindromme(int n)
{
	int b=1,tmp=0,i=0;
	for(i=0; i < digit(n)-1 ;i++)
	{
		b=b*10;
	}
		
	tmp = mirror(n/10);
	n = (n*b)+tmp;
	return n;
}


int main()
{
	int n=0,res=0;
	printf("Donnez le nombre N: \n");
	scanf("%d",&n);

	printf("Le nombre mirroir est : %d\n",mirror(n));

	printf("Le nombre de chiffres est : %d\n",digit(n));

	printf("Le palindromme est %d\n",palindromme(n));


}
