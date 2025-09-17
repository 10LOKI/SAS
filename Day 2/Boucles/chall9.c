#include <stdio.h>
// Challenge 9 : Calcul de la Puissance
int main(void)
{
    int a , b , c = 1 , d = 1;

    printf("Veuillez saisir la base :\n");
    scanf("%d",&a);

    printf("Veuillez saisir l'exposant :\n");
    scanf("%d",&b);
    if(b<=0)
    {
        printf("Invalid input \n");
        return 1;
    }

    while (c<=b)
    {
        d = a * d; // hadi mli terje3 l dar ktebha w 39el 3liha !!!!!
        c++;
    }
    printf("Alors le resultat est : %d \n", d);
    return 0;
}