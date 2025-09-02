#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Challenge 11 : Jour de la Semaine
int main(void)
{
    srand(time(NULL));

    char *jours[] = 
    {
        "Tnin",
        "Tlate",
        "Larb3a",
        "Lkhmiss",
        "Sebt",
        "L7ed",
    };

    int nombreJours = sizeof(jours) / sizeof(jours[0]);

    int indexAleatoire = rand() % nombreJours;

    printf("Jour de la semaine aléatoire : %s\n", jours[indexAleatoire]);

    return 0;
}