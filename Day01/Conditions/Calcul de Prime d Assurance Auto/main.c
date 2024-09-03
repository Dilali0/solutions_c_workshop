#include <stdio.h>
#include <stdlib.h>

int main() {
    int age, type_voiture, accidents;
    float prime_base = 1000.0; 
    float prime_finale;

    printf("Entrez l age du conducteur (en annees) : ");
    scanf("%d", &age);

    printf("Entrez le type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale) : ");
    scanf("%d", &type_voiture);

    printf("Entrez le nombre d'accidents au cours des 5 dernières annees : ");
    scanf("%d", &accidents);

    if (age < 25) {
        prime_finale = prime_base * 1.5;
    } else if (age <= 65) {
        prime_finale = prime_base;
    } else {
        prime_finale = prime_base * 1.2;
    }

    switch (type_voiture) {
        case 1:
            prime_finale *= 2; 
            break;
        case 2:
            prime_finale *= 1.2; 
            break;
        case 3:
            prime_finale *= 1.1; 
            break;
        default:
            printf("Type de voiture invalide.\n");
            return 1; 
    }

    if (accidents > 1) {
        prime_finale *= 1.3; // Ajout de 30% à la prime si plus d'un accident
    }

    printf("La prime d'assurance est de : %.2f euros.\n", prime_finale);

    return 0;
}
