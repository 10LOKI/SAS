 #include <stdio.h>
 // Challenge 4 : Évaluation de Performance d'Employé
 int main(void)
 {
    float score;
    int anc;
    int reco;

    printf("Score de performance (de 0 à 100) :\n");
    scanf("%f",&score);

    if (score < 0 || score > 100) {
        printf("Erreur : Le score doit être entre 0 et 100.\n");
        return 1;
    }
    
    printf("Ancienneté (en années) :\n");
    scanf("%d",&anc);
    printf("Récompenses reçues (0 pour aucune, 1 pour une, 2 pour deux ou plus) :\n");
    scanf("%d",&reco);

    if (reco > 2 || reco < 0)
    {
        printf("Invalid input \n");
        return 1;
    }

    if ( reco == 1)
    {
        score *= 1.1;
    }
    else if (reco == 2)
    {
        score *= 1.2;
    }

    if (score >= 90 && anc >= 5 )
    {
        printf("Votre performance est Excellente \n");
    }
    else if (score >= 75 && anc >= 3 )
    {
        printf("Votre performance est Bonne\n");
    }
    else if (score >= 50 && anc < 3  )
    {
        printf("Votre performance est Satisfaisante\n");
    }
    else if (score < 50 )
    {
        printf("Votre performance est Insuffisante\n");
    }

     printf("Score final après bonus: %.2f\n", score);

    return 0;
 }