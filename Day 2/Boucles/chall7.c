#include <stdio.h>
// Challenge 7 : Suite de Fibonacci
int main(void)
{
    int n , a = 0 , b = 1 , c , d;

    printf("Veuillez saisir un nombre n :\n");
    scanf("%d",&n);

    for(d = 1 ; d<=n ; d++)
    {
        printf("%d ",a);
        c = a+b;
        a = b;
        b = c;
    }

    return 0;
}