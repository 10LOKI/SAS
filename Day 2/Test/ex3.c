#include <stdio.h>
int main(void)
{
    int S = 0 , T1[6] , n , T2[6];

    printf("Veuillez saisir les valeurs du tableau :\n");
    for(n = 0;n<6;n++)
    {
        printf("T[%d] = ",n+1);
        scanf("%d",&T1[n]);
        S += T1[n];
    }
    if(S >  0)
    {
        printf("Le Tableau Inversee est :\n");
        for(n=0;n<6;n++)
        {
            T2[n] = T1[5-n];
            printf("%d\n",T2[n]);
        }
    }
    return 0;
}