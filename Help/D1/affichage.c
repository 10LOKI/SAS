#include <stdio.h>
int main(void)
{
    int T[100] , Frq[100];
    int i , j , n , cmp;

    printf("Veuillez saisir la taille du tableau :\n");
    scanf("%d",&n);

    printf("Veuillez saisir les valeurs du tableau :\n");
    for(i=0;i<n;i++)
    {
        printf("T[%d] = ",i+1);
        scanf("%d",&T[i]);
    }
    for(i=0;i<n;i++)
    {
        Frq[i]= -1;
    }

    for(i=0;i<n;i++)
    {
        cmp = 1;
        for(j=0;j<n;j++)
        {
            if(T[i]==T[j])
            {
                cmp ++;
                Frq[j] = 0;
            }
        }
        if (Frq[i] != 0)
        {
            Frq[i] = cmp;
        }
    }
    printf("\n les elements unique du tableaux sont :\n");
    for(i=0;i<n;i++)
    {
        if(Frq[1] == 1)
        {
            printf("T[%d] = %d\n",i+1,T[i]);
        }
    }
    return 0;
}