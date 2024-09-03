#include <stdio.h>
#include <stdlib.h>

int main() {
    float revenu_annuel;
    int score_credit;
    int duree_pret;

    printf("Entrez votre revenu annuel (en euros): ");
    scanf("%f", &revenu_annuel);

    printf("Entrez votre score de credit (sur 1000): ");
    scanf("%d", &score_credit);

    printf("Entrez la durée du prêt (en annees): ");
    scanf("%d", &duree_pret);

    if (revenu_annuel >= 30000 && score_credit >= 700 && duree_pret <= 10) {
        printf("Vous etes eligible pour le pret.\n");
    } else if (revenu_annuel >= 30000 && score_credit >= 650 && duree_pret <= 15) {
        printf("Vous etes eligible pour le pret avec conditions.\n");
    } else if (revenu_annuel < 30000 || score_credit < 650 || duree_pret > 15) {
        printf("Vous n etes pas eligible pour le pret.\n");
    } else {
        printf("Erreur dans les donnees saisies.\n");
    }

    return 0;
}
