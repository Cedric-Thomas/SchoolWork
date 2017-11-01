#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void pnt(int *var)
{
	*var = *var * 3;
}
int main(int argc, char **argv)
{
	srand(time(NULL));
	int var = random()%100;
	pnt(&var);
	printf("%d\n",var);
}
