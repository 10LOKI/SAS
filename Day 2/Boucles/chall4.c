#include <stdio.h>
// Challenge 4 : Inversion d'un Entier
int main (void)
{
    int num , reminder , revNumber = 0;

    printf("Veuillez saisir un nombre : \n");
    scanf("%d",&num);

    while (num > 0)
    {
        reminder = num % 10;
        num = num / 10;
        revNumber = (revNumber*10)+reminder;
    }
    printf("Le Nombre Inversée est %d\n",revNumber);
    return 0;
}