// Challenge 5 : Calcul de la Puissance
#include <stdio.h>
int main(void){
    int x,n,i,result;

    printf("Veuillez saisir une base :\n");
    scanf("%d",&x);

    printf("Veuillez saisir un exposant :\n");
    scanf("%d",&n);
    result = 1;
    for(i = 1; i<= n ;i++){
        result *= x;
    }
    printf("la puissance de %d par %d est %d\n",x,n,result);
    return 0;
}