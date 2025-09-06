#include <stdio.h>
// Challenge 6 : Calcul de la Facture d'Électricité
int main(void)
{
    float cons;
    float facture;
    int user;
    int contract;

    printf("Consommation d'électricité (en kWh) :\n");
    scanf("%f",&cons);

    if (cons < 0)
    {
        printf("Invalid input\n");
        return 1;
    }

    printf("Type d'utilisateur (1 pour résidentiel, 2 pour commercial) :\n");
    scanf("%d",&user);

    if(user < 1 || user > 2)
    {
        printf("Invalid user\n");
        return 1;
    }

    printf("Type de contrat (0 pour standard, 1 pour réduit) :\n");
    scanf("%d",&contract);

    if(contract < 0 || contract > 1)
    {
        printf("Invalid Contract\n");
        return 1;
    }

    if (user == 1)
    {
        if (contract == 0 )
        {
            facture = 0.20 * cons;
        }
        else
        {
            facture = 0.15 * cons;
        }
    }
    else
    {
        if (contract == 0 )
        {
            facture = 0.30 * cons;
        }
        else
        {
            facture = 0.25 * cons;
        }
    }
    if (cons > 500)
    {
        facture *= 1.1;
    }
    printf("La consommation de  la facture d'électricité est %.2f\n",facture);
    return 0;
}