#include <stdio.h>
// Challenge 7 : Calcul des Impôts
int main(void)
{
    float impos;
    float revenu;
    float revenu_net;
    int stat;

    printf("Revenu annuel (en euros) :\n");
    scanf("%f",&revenu);

    if (revenu < 0)
    {
        printf("Invalid input\n");
        return 1;
    }

    printf("Statut fiscal (1 pour célibataire, 2 pour marié, 3 pour chef de famille) :\n");
    scanf("%d",&stat);

    if(stat < 1 || stat > 3)
    {
        printf("Invalid input\n");
        return 1;
    }

    revenu_net = revenu;

    if(stat == 1)
    {
        revenu_net -= 1000;
        printf("Vous etes Celibataire alors Vous avez une Déduction de 1000 €\n");
    }
    else if (stat == 2)
    {
        revenu_net -= 2000;
        printf("Vous etes Marié alors Vous avez une Déduction de 2000 €\n");
    }
    else if (stat == 3)
    {
        revenu_net -= 3000;
        printf("Vous etes Chef de famille alors Vous avez une Déduction de 3000 €\n");
    }

    if (revenu_net < 0)
    {
        revenu_net = 0;
    }

    if(revenu_net <= 20000)
    {
        impos = revenu_net * 0.5;
    }
    else 
    {
        impos = 20000 * 0.05 + 30000 * 0.10 + (revenu_net - 50000) * 0.20;
    }

    printf("Vous avez %.2f d'impôts à payer \n",impos);

    return 0;
}