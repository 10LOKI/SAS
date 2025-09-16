#include <stdio.h>
// Challenge 1 : Table de Multiplication Inversée
int main(void)
{
    int a , b;

    printf("Veuillez saisir un nombre :\n");
    scanf("%d",&a);

    for(b = 10 ; b > 0 ; b--)
    {
       printf("%d x %d = %d\n",a,b,a*b);     
    }

    return 0;
}