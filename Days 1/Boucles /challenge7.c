// Challenge 7 : Inversion d'un Entier
#include <stdio.h>
int main(void){

    int n,i;
    int inverse = 0;

    printf("Veuillez saisir un nombre n :\n");
    scanf("%d",&n);

    for(i = 0; i <= n ;i++)
    {
        inverse = (inverse * 10)+(n%10);
        n = n / 10;
        
    }
    printf("%d",inverse);
    return 0;
}