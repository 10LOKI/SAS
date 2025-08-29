#include <stdio.h>

//Challenge 1 : Paire ou Impaire
int main(void)
{
    int num;

    printf("Veuillez saisir un nombre :\n");
    scanf("%d",&num);

    if(num % 2 == 0)
    {
        printf("%d est pair\n",num);
    }
    else
    {
        printf("%d est impair\n",num);
    }
    return 0;
}