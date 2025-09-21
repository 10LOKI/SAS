#include <stdio.h>
int main(void)
{
    int T[100] , P[100] , I[100];
    int n , i , Pcmp = 0, Icmp = 0;

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
        if(T[i] % 2 == 0)
        {
            P[Pcmp] = T[i];
            Pcmp++;
        }
        else
        {
            I[Icmp] = T[i];
            Icmp++;
        }
    }
    printf("Les elements du tableau paire sont :\n");
    for(i=0;i<Pcmp;i++)
        printf("%d\n",P[i]);
    printf("Les elments du tableau impaires sont :\n");
    for(i=0;i<Icmp;i++)
        printf("%d\n",I[i]);

    return 0;
}