#include <stdio.h>
int main(void)
{
    int T[8];
    int n , m , l;

    printf("Veuillez saisir les valeurs du tableau :\n");
    for(n=0;n<8;n++)
    {
        printf("T[%d] = ",n+1);
        scanf("%d",&T[n]);
    }

    printf("Veuillez saisir une valeur :\n");
    scanf("%d",&m);

    printf("les elements qui sont superieurs sont :\n");
    for(n=0;n<8;n++)
    {
        if(m < T[n])
        {
            printf("%d\n",T[n]);
            l++;
        }
    }
    printf("Les elements qui sont superieurs a %d sont %d \n",m , l);


    return 0;
}