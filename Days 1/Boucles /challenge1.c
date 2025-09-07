#include <stdio.h>
// Challenge 1 : Table de Multiplication
int main(void)
{
    int num;
    int i;

    printf("Veuiller saisir un nombre :\n");
    scanf("%d",&num);

    for(i = 0 ; i <= 10 ; i++)
    {
        printf("%d * %d = %d\n",num,i,num*i);
    }

    return 0;
}