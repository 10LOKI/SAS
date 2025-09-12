#include <stdio.h>
// Challenge 2 : Saisie et Affichage des Éléments
int main(void)
{   
    int n,i;
    

    printf("Veuillez saisir le nombre d'élements du tableau :\n");
    scanf("%d",&n);

    int tab[n];

    printf("Veuillez saisir les élements de ce tableau :\n");
    for(i = 0;i<n;i++)
    {
        scanf("%d",&tab[i]);
    }

    for(i = 0;i<n;i++)
    {
        printf("%d\n",tab[i]);
    }

    return 0;
}