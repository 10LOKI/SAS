#include <stdio.h>
int main(void)
{
    int T[10] , n , m = 0;

    printf("Veuillez saisir les valeurs du tableau :\n");
    for(n=0;n<10;n++)
    {
        scanf("%d",&T[n]);
    }
    printf("les element divisables sur 3 sont :\n");
    for(n=0;n<10;n++)
    {
        if(T[n] % 3 == 0)
        {
            printf("%d\n",T[n]);
            m++;
        }
    }
    printf("le nombre des elements qui sont divisables sur 3 est %d\n", m);
    return 0;
}