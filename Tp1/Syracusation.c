#include <stdio.h>

int main() 
{
    int n=0, u, i;
    printf("Entrer U0: ");
    scanf("%d",&u);
    printf("Entrer n: ");
    scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        if ((u%2) == 0)
            u=u/2;
        else
            u=u*3+1;
    }
    printf("%d\n",u);
    return 0;
}
