#include <stdio.h>
// Challenge 5 : Somme des N Nombres
int main(void)
{
    int  n , l , s = 0;

    printf("Veuillez saisir un entier :\n");
    scanf("%d",&n);

    for(l=1 ; l<=n ;l++)
    {
        s = s + l ;
        printf("%d + ",l);
    }
    printf("La Somme Des entiers est %d\n",s);



    return 0;
}