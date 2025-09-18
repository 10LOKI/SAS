#include <stdio.h>
int main(void)
{
    int T[10] , n , max;

    printf("Veuillez Remplir le tableau suivant :\n");
    for(n=0;n<10;n++)
    {
        scanf("%d",&T[n]);
    }
    max = T[0];
    for(n=0;n<10;n++)
    {
        if(max < T[n])
        {
            max = T[n];
        }
    }
    printf("Le maximum de ce tableau est %d\n",max);
    return 0;
}