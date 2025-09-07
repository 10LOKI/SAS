// Challenge 2 : Factorielle d'un Nombre
#include <stdio.h>
int main(void)
{
    int n;
    int i;
    unsigned long long fact = 1;

    printf("Veuiller saisir un nombre :\n");
    scanf("%d",&n);

    if (n < 0)
    {
        printf("Invalid input \n");
        return 1;
    }

    for(i = 1 ; i <= n ; i++)
    {
        fact *= i;
    }

    printf("Factorielle de %d : %llu\n",n,fact);

    return 0;
}