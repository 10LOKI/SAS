#include <stdio.h>
// Challenge 3 : Somme de Deux Valeurs
int main()
{
    int a,b;

    printf("veuillez saisir deux nombres\n");
    scanf("%d\n%d",&a,&b);

    if( a == b)
    {
        printf("%d + %d + %d = %d\n",a,b,a,a+b+b);
    }
    else 
    {
        printf("%d + %d = %d\n",a,b,a+b);
    }
    return 0;
}