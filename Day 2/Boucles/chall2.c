#include <stdio.h>
// Challenge 2 : pyramide d'étoile
int main(void)
{
    int n , i , j;

    printf("Combien de lignes vous voulez :\n");
    scanf("%d",&n);

    for(i = 1 ; i <= n ; i++)
    {
        for(j = 1 ; j <= 2*n-1 ; j++)
        {
            if(j >= n -(i-1) && j <= n+(i-1))
            {
                printf("*");
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}