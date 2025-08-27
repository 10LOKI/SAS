#include <stdio.h>
// Challenge 3 : Somme de Deux Valeurs
int main(void)
{
    int num1,num2;

    printf("veuillez saisir deux nombres\n");
    scanf("%d\n%d",&num1,&num2);

    if( num1 == num2)
    {
        printf("%d + %d + %d = %d\n",num1,num2,num1,num1+num2+num1);
    }
    else 
    {
        printf("%d + %d = %d\n",num1,num2,num1+num2);
    }
    return 0;
}