#include <stdio.h>
// Exercice 2 :Voyelle ou non 
int main(void)
{
    char car;

    printf("Veuillez entrer un caractere :\n");
    scanf("%c",&car);

    switch (car)
    {
        case 'a':
        printf("ce caractére est une voyelle\n");
        break;
        case 'e':
        printf("ce caractére est une voyelle\n");
        break;
        case 'i':
        printf("ce caractére est une voyelle\n");
        break;
        case 'o':
        printf("ce caractére est une voyelle\n");
        break;
        case 'u':
        printf("ce caractére est une voyelle\n");
        break;
        case 'y':
        printf("ce caractére est une voyelle\n");
        break;
        default :
        printf("ce caractére n'est pas une voyelle\n");
    }
    return 0;
}
