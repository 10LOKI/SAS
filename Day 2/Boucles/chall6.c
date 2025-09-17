#include <stdio.h>
// Challenge 6 : Facteurs d'un Nombre
int main(void)
{
    int n , l ;
    printf("Veuillez saisir un nombre :\n");
    scanf("%d",&n);

    printf("les facteurs de %d\n",n);
    for(l=1 ;l<=n ; l++)
    {
        if(n%l == 0)
        {
            printf("%d ",l);
        }
    }
    return 0;
}