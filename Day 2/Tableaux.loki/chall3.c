#include <stdio.h>
// Challenge 3 : Somme des Éléments
int main(void)
{
    int n,i,Somme;
    

    printf("Veuillez saisir le nombre d'élements du tableau : \n");
    scanf("%d",&n);
    int tab[n];
    Somme = 0;
    printf("Veuillez saisir les elements du tableau :\n");
    for(i = 0;i< n ;i++)
    {
        scanf("%d",&tab[i]);
        Somme += tab[i];
    }
    printf("La somme des Elements est %d\n",Somme);

    return 0;
}