#include <stdio.h>
// Challenge 1 : Évaluation d'un Prêt
int main(void)
{
    int R_annuel , S_credit , D_pret;

    printf("veuillez entrer votre Revenu annuel (en euros) :\n");
    scanf("%d",&R_annuel);
    printf("veuillez entrer votre Score de crédit (sur 1000) :\n");
    scanf("%d",&S_credit);
    printf("veuillez entrer votre Durée du prêt (en années) :\n");
    scanf("%d",&D_pret);

    if ( R_annuel >= 30000 && S_credit >= 700 && D_pret <= 10 )
    {
        printf("Vous etes Eligible\n");
    }
    else if ( R_annuel >= 30000 && S_credit >= 650 && D_pret <= 15 )
    {
        printf("T'es eligible avec conditions\n");
    }
    else
    {
        printf("Vous etes pas eligible\n");
    }
    return 0;
}