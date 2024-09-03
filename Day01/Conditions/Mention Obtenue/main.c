#include <stdio.h>
#include <stdlib.h>

int main() {
    float moyenne;

    printf("Entrez votre moyenne: ");
    scanf("%f", &moyenne);

    if (moyenne < 10) {
        printf("Recale\n");
    } else if (moyenne >= 10 && moyenne < 12) {
        printf("Mention Passable\n");
    } else if (moyenne >= 12 && moyenne < 14) {
        printf("Mention Assez Bien\n");
    } else if (moyenne >= 14 && moyenne < 16) {
        printf("Mention Bien\n");
    } else if (moyenne >= 16) {
        printf("Mention Tres Bien\n");
    } else {
        printf("Moyenne invalide\n");
    }

    return 0;
}