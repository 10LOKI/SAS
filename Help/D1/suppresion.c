#include <stdio.h>

int main(void)
{
    int T[100];
    int i , n , pos , t;

    printf("Veuillez Saisir la taille du tableau :\n");
    scanf("%d",&n);
    printf("Veuillez saisir les elements du tableau :\n");
    for(i=0;i<n;i++)
    {
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }

    printf("Veuillez saisir la position :\n");
    scanf("%d",&pos);
    
    if(pos<= 0 || pos >= n + 1)
    {
        printf("Position invalide! \n");
        return 1;
    }
    else 
    {
        for(i=pos;i<n;i++)
        {
            T[i-1]= T[i];
        }
        n --;
        printf("Elements du tableau apres la suppresion :\n");
        for(i=0;i<n;i++)
        {
            printf("T[%d] = %d\n",i+1,T[i]);
        }
    }

    return 0;
}