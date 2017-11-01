#include <stdio.h>

int main()
{
    float i, n=0, nbm=0;
    printf("Rang de la serie harmonique? ");
    scanf("%f",&n);
        for (i=1; i<=n; i++)
    {
        nbm+=(1/i);
    }
    printf("%g\n",nbm);
    return 0;
}
