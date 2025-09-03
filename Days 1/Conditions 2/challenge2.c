#include <stdio.h>
// Challenge 2 : Calcul de Prime d'Assurance Auto
int main(void)
{
    int age;
    int type;
    int nbr_acc;
    float prime_base = 100;
    float prime = prime_base;

    printf("saisis votre age :\n");
    scanf("%d",&age);
    printf("Enter le type de votre voiture :\n1-sportive\n2-utilitaire\n3-familiale\n");
    scanf("%d",&type);
    printf("combien d'accidents au cours des 5 dernières années\n");
    scanf("%d",&nbr_acc);

    if( age < 25)
    {
        prime *= 1.5;
    }
    else if ( age > 65)
    {
        prime *= 1.2;
    }

    if ( type == 1)
    {
        prime *= 2;
    }
    else if (type == 2)
    {
        prime *= 1.2;
    }
    else if (type == 3)
    {
        prime *= 1.1;
    }

    if (nbr_acc > 1)
    {
        prime *= 1.3;
    }

    printf("Prime de base : %.2f €\n", prime_base);
    printf("Prime finale : %.2f €\n", prime);

    return 0;
}