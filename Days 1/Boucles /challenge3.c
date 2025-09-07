// Challenge 3 : Somme des N Nombres
#include <stdio.h>
int main(void)
{
    int n , i , somme;

    printf("Veuillez saisir un nombre :\n");
    scanf("%d",&n);

    somme = 0;
    for(i = 0 ; i <= n ; i++){
        somme = somme + i;
    }
    printf("Alors la somme du nombre %d : \n%d\n",n,somme);

    return 0;
}