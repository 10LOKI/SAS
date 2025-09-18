#include <stdio.h>
int main(void)
{
    int n , T[7];
    int crois = 0;
    printf("Veuillez Remplir le tableau :\n");
    for(n=0;n<7;n++)
    {
        scanf("%d",&T[n]);
    }
    for(n=0;n<7;n++)
    {
        if(T[n] < T[n+1])
        {
            crois = 1;
        }
        else 
        {
            crois = 0;
            break;
        }
    }
    if (crois == 1)
    {
        printf("Ce tableau est en ordre croissant \n");
    }
    else 
    {
        printf("Ce tableau n'est pas en ordre croissant \n");
    }
    return 0;
}