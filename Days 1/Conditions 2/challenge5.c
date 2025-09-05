#include <stdio.h>
// Challenge 5 : Planification de Voyage
int main(void)
{
    int budget;
    int Dest;
    int nbr;

    printf("Veuillez saisir votre budget :\n");
    scanf("%d",&budget);

    printf("Destination (1 pour plage, 2 pour montagne, 3 pour ville)\n");
    scanf("%d",&Dest);

    if ( Dest < 1 || Dest > 3)
    {
        printf("Vous pouvez saisir une valide destination \n");
        return 1;
    }

    printf("combien de personnes :\n");
    scanf("%d",&nbr);

    if(budget >= 1000)
    {
        printf("On vous recommande un voyage de haut de gammme\n");
    }
    else if (budget >= 500 && budget <= 1000)
    {
        printf("On vous recommande un voyage moyen\n");
    }
    else if (budget < 500)
    {
        printf("On vous recommande un voyage économique\n");
    }

    if (budget >= 1000 && nbr > 2)
    {
        printf("on vous recommande un voyage à la plage\n");
    }
    else if (budget >= 500 && nbr <= 2)
    {
        printf("on vous recommande un voyage à la montagne \n");
    }
    else
    {
        printf("on vous recommande un voyage à la ville\n");
    }
    return 0;
}