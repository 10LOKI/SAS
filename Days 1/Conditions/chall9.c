#include <stdio.h>
// Challenge 9 : Vérification d'Alphabet
int main(void)
{
    char c;

    printf("Entrer un caractere :\n");
    scanf("%c",&c);

    if ( c >= 'a' && c <= 'z')
    {
        printf("ce caractere fait partie des alphabets \n");
        printf("%c est en minuscule \n",c);
    }
    else if ( c >= 'A' && c <= 'Z')
    {
        printf("ce caractere fait partie des alphabets \n");
        printf("%c est en majuscule \n",c);
    }
    else
    {
        printf("ce caractere ne fait pas partie des alphabets \n");
    }
    return 0;
}