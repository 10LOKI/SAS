#include <stdio.h>
// Challenge 6 : Positif, Négatif ou Nul
int main(void)
{
    int x;

    printf("veuillez saisir un nombre :\n");
    scanf("%d",&x);

    if ( x < 0)
    {
        printf("%d est négatif\n",x);
    }
    else if ( x == 0)
    {
        printf("%d est nul \n",x);
    }
    else 
    {
        printf("%d est positif\n",x);
    }
    
    return 0;
}