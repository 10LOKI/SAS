#include <stdio.h>
// Challenge 3 : Gestion des Congés
int main(void)
{
    int j_res;
    int j_acc;
    int j_uti;
    int stat;

    printf("entrer le Nombre total de jours de congés accordés :\n");
    scanf("%d",&j_acc);
    printf("entrer le Nombre de jours de congés utilisés :\n");
    scanf("%d",&j_uti);
    printf("Statut de l'employé (0 pour temps partiel, 1 pour temps plein) :\n");
    scanf("%d",&stat);

    if (j_uti > j_acc)
    {
        printf("Invalid input \n");
        return 1;
    }
    
    if ( stat == 1)
    {
         j_res = j_acc - j_uti;
    }
    else if ( stat == 0)
    {
        j_res = (j_acc / 2) - j_uti;
    }
    printf("les jours restants : %d\n",j_res);
    return 0;
}