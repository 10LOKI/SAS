#include <stdio.h>
#include <stdbool.h>
// Challenge 3 : Affichage des Nombres Premiers
int main(void)
{
    int n , l , y;
    bool is_prime = true;

    printf("Veuillez saisir un nombre :\n");
    scanf("%d",&n);

    for (l = 2; l <= n; l++) {
        bool is_prime = true;

        for (y = 2; y < l; y++) {
            if (l % y == 0) {
                is_prime = false;
                break;
            }
        }

        if (is_prime) {
            printf("%d\n", l);
        }
    }
    return 0;
}