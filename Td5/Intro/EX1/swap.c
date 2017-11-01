#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
	int tmp;	
	tmp=*a;
	*a=*b;
	*b=tmp;	
}

int main()
{
	int a,b;	
	printf("Donnez la valeur de a :\n");
	scanf("%d",&a);
	printf("Donnez la valeur de b :\n");
	scanf("%d",&b);
	swap(&a,&b);
	printf("La valeur de a est :%d et celle de b : %d\n",a,b);
}
