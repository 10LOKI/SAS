#include <stdio.h>
// Challenge 7 : Alphabet Majuscule
void verif_alpha(char c)
{
    if ( c >= 'A' && c <= 'Z')
    {
        printf("%c est MAJUSCULE (ascii %d)\n",c,c);
    }
    else if ( c >= 'a' && c <= 'z')
    {
        printf("%c est minuscule (ascii %d)\n",c,c);
    }
    else 
    {
        printf("ce n'est pas une lettre de l'alphabet\n");
    }
}

int main(void)
{
    char lettre;

    printf("saisir une lettre :\n");
    scanf("%c",&lettre);

    verif_alpha(lettre);

    return 0;
}