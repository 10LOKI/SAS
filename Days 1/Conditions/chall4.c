#include <stdio.h>
#include <math.h>


// Challenge 4 : Equation du Deuxième Degré
int main(void)
{
    int a,b,c;
    float delta;
    float x,x1,x2;

    printf("ax²+bx+c = 0\n");

    printf("Veuillez saisir les coefficients : \n");
    printf("a = ");
    scanf("%d",&a);
    if (a == 0)
    {
        printf("cette equation est invalide\n");
        return 1;
    }
    printf("b = ");
    scanf("%d",&b);
    printf("c = ");
    scanf("%d",&c);

    delta = pow(b,2)-4*a*c;
    printf("Alors Δ = %.2f\n",delta);

    if (delta > 0)
    {
        x1 = (-b-sqrt(delta))/ 2*a;
        x2 = (-b+sqrt(delta))/2*a;
        printf("il existe deux solutions reeles :\n x1 = %.2f \t x2 = %.2f \n ",x1,x2);
    }
    else if (delta == 0)
    {
        x = - b / 2*a;
        printf("L'équation a une solution réelle double %.2f \n",x);
    }
    else 
    {
        printf("L'équation n'a aucune solution réelle\n");
    }
}

