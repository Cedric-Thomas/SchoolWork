#include <stdio.h>

int main()
{
    int min=2147483647,max=0,input=0,i;
    for (i=0; i<10; i++)
    {
        printf("Entrer un entier: ");
        scanf("%d",&input);
        if (input > max)
            max = input;
        if (input < min)
            min = input;
    }
    printf("Le Nombre mini est %d et le maxi %d\n",min,max);
    return 0;
}
