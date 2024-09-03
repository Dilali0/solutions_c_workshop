#include <stdio.h>
#include <stdlib.h>

int main() {
    int choix;
    int annee;
    int mois, jours, heures, minutes, secondes;

    printf("Entrez une annee: ");
    scanf("%d", &annee);

    printf(" Choisissez la conversion:\n");
    printf("1. Convertir en mois\n");
    printf("2. Convertir en jours\n");
    printf("3. Convertir en heures\n");
    printf("4. Convertir en minutes\n");
    printf("5. Convertir en secondes\n");
    printf("Entrez votre choix (1-5): ");
    scanf("%d", &choix);

    switch (choix) {
        case 1:
            mois = annee * 12;
            printf("%d annee(s) = %d mois\n", annee, mois);
            break;
        case 2:
            jours = annee * 365;
            printf("%d annee(s) = %d jours\n", annee, jours);
            break;
        case 3:
            heures = annee * 365 * 24;
            printf("%d annee(s) = %d heures\n", annee, heures);
            break;
        case 4:
            minutes = annee * 365 * 24 * 60;
            printf("%d annee(s) = %d minutes\n", annee, minutes);
            break;
        case 5:
            secondes = annee * 365 * 24 * 60 * 60;
            printf("%d annee(s) = %d secondes\n", annee, secondes);
            break;
        default:
            printf("Choix invalide.\n");
    }

    return 0;
}
