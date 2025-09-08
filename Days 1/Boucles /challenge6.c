// Challenge 6 : Affichage des N Premiers Nombres Pair
#include <stdio.h>
int main(void){
    int n,i;
    printf("Veuillez saisir un nombre n :\n");
    scanf("%d",&n);
    for(i =0;i <= 2*n - 1;i++){
        if(i%2 == 0){
            printf("%d\n",i);
        }
    }
    return 0;
}