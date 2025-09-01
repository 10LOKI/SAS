#include <stdio.h>
// Challenge 8 : Mention Obtenue
int main(void)
{
    float note;

    printf("Veuillez saisir votre moyenne de note :\n");
    scanf("%f",&note);

    if (note < 10)
    {
        printf("t'es recalé\n");
    }
    else if ( note < 12)
    {
        printf("Passable\n");
    }
    else if ( note < 14 )
    {
        printf("Assez bien\n");
    }
    else if ( note < 16)
    {
        printf("Bien\n");
    }
    else if ( note < 20)
    {
        printf("Tres bien\n");
    }
    else
    {
        printf("invalid input\n");
    }
    return 0;
}