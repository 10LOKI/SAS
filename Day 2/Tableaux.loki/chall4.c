#include <stdio.h>
// Challenge 4 : Trouver le Maximum 
int main(void)
{
    int n,i;
    int max = 0;
    
    printf("Veuillez saisir le nombre d'Elements du tableau :\n");
    scanf("%d",&n);

    int tab[n];

    printf("Veuillez saisir les Elements du tableau :\n");
    for(i=0;i<n;i++){
        scanf("%d",&tab[i]);
        if(max < tab[i])
        max = tab[i];
    }
    printf("Le plus grand element dans ce tableau est %d\n",max);

    return 0;
}