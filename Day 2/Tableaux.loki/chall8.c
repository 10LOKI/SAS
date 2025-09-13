#include <stdio.h>
// Challenge 8 : Copie d'un Tableau
int main(void)
{
    int n , i;

    printf("Veuillez saisir le nombre d'élements :\n");
    scanf("%d",&n);

    int tab[n];
    int copie[n];

    printf("Entrer les valeurs du tableau :\n");
    for(i=0;i<n;i++){
        scanf("%d",&tab[i]);
    }

    printf("Tableau originale:\n");
    for(i=0;i<n;i++){
        printf("%d\n",tab[i]);
    }

    printf("Tableau copié:\n");
    for(i=0;i<n;i++){
        copie[i] = tab[i];
    }
    

    for(i=0;i<n;i++){
        printf("%d\n",copie[i]);
    }
    return 0;
}