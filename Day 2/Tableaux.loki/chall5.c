#include <stdio.h>
// Challenge 5 : Trouver le Minimum
int main(void)
{
    int n,i;
    int min = 0;

    printf("Veuilez saisir le nombre d'Elements de ce tableau :\n");
    scanf("%d",&n);

    int tab[n];

    printf("Veuillez saisir les elements de ce tableau :\n");
    for(i=0 ; i < n ;i++)
    {
        scanf("%d",&tab[i]);
        if(min > tab[i])
        min = tab[i];
    }
    printf("Le minimum de ce tableau est %d\n",min);
    return 0;
}