#include <stdio.h>
// Challenge 1 : Initialisation et Affichage
int main(void)
{   
    int tab[5] = {1, 2, 3, 4, 5};

    int length = sizeof(tab) / sizeof(tab[0]);
    for(int i = 0; i < length ; i++)
    {
        printf("%d\n",tab[i]);
    }
    return 0;
}