#include <stdio.h> 
// Challenge 5 : Conversion d'Année
int main(void)
{
    long year;
    int choix;
    int vrai;

    printf("veuillez saisir le nombre d'annees : \n");
    scanf("%ld",&year);

    while(vrai)
    {
        printf("\n-------- Menu de conversion ---------\n");
        printf("1.Convertir en mois\n");
        printf("2.Convertir en jours\n");
        printf("3.Convertir en heures\n");
        printf("4.Convertir en minutes\n");
        printf("5.Convertir en secondes\n");
        printf("6.Quitter\n");
        printf("Votre choix : ");
        scanf("%d",&choix);

        switch(choix)
        {
            case 1 :
            printf("%ld annee = %ld mois\n",year,year * 12);
            break;
            case 2 :
            printf("%ld annee = %ld jours",year,year*365);
            break;
            case 3 :
            printf("%ld annee = %ld heures",year,year*365*24);
            break;
            case 4 :
            printf("%ld annee = %ld minutes",year,year*365*24*60);
            break;
            case 5 :
            printf("%ld annee = %ld secondes",year,year*365*24*60*60);
            break;
            case 6 :
            vrai = 0;
            printf("Vous avez quitté le programme\n");
            break;
            default :
            printf("invalide input\n");
            break;
            printf("\n\n\n");
        }
    }
    return 0;
}