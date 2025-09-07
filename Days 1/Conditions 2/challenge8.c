#include <stdio.h>
// Challenge 8 : Plan de Santé
int main(void)
{
    int age;
    int history;
    int type;

    printf("Veuillez saisir votre age :\n");
    scanf("%d",&age);

    if (age <= 0 || age > 120)
    {
        printf("Invalid Age \n");
        return 1;
    }

    printf("Historique médical (0 pour aucun problème, 1 pour problème mineur, 2 pour problème majeur)\n");
    scanf("%d",&history);

    if(history < 0 || history > 2)
    {
        printf("Invalid input \n");
        return 1;
    }

    printf("Type de couverture (1 pour de base, 2 pour étendue) :\n");
    scanf("%d",&type);

    if(type != 1 && type != 2)
    {
        printf("Invalid input\n");
        return 1;
    }

    if(age < 30)
    {
        printf("Plan recommandé : Plan de base \n");
    }
    else if (age >= 30 && history == 0)
    {
        printf("Plan recommandé : Plan de base \n");
    }
    else if (age >= 30 && history >= 1)
    {
        printf("Plan recommandé : Plan étendu \n");
    }

    if (history == 2) {
        printf("→ Problèmes médicaux majeurs détectés\n");
    }
    return 0;
}