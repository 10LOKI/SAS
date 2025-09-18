#include <stdio.h>
int main(void)
{
    int T[10] , u;

    printf("Entrer les elements du tableau : \n");
    for(u = 0 ; u < 10 ; u++)
    {
        printf("T[%d] = ",u+1);
        scanf("%d",&T[u]);
    } 

    for(u=0; u<10;u++)
    {
        if(T[u] % 2 != 0)
        {
            printf("%d\n",T[u]);
        }
    }
    return 0;
}