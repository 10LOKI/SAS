#include <stdio.h>
// Challenge 7 : Tableau en Ordre Croissant
int main(void){
    int n , i , j ;
    int max = 0;

    printf("Entrer les nombres d'elements :\n");
    scanf("%d",&n);

    int tab[n];

    printf("Entrer les valeurs de ce tableau :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&tab[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
           if(tab[i]>tab[j]){
            max = tab[i];
            tab[i] = tab[j];
            tab[j] = max;   
        }
        }
    }
    for(i=0;i<n;i++)
    printf("%d\n",tab[i]);
    return 0;
}