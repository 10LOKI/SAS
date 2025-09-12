#include <stdio.h>
// Challenge 6 : Multiplication des Éléments
int main(void)
{
    int n , i ,f , mult;
    printf("le nombre d'éléments\n");
    scanf("%d",&n);

    printf("Entrer le facteurs de multiplication :\n");
    scanf("%d",&f);

    int tab[n];
    printf("Entrer les éléments du tableau \n");
    for(i=0;i<n;i++){
        scanf("%d",&tab[i]);
    }
    printf("Le tableau de multiplication est :\n");
    for(i=0;i<n;i++){
        printf("%d\n",tab[i]*f);
    }
    return 0;
}