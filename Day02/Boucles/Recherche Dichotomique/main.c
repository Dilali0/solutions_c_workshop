#include <stdio.h>
#include <stdlib.h>

int main() {
    int n ,fact = 1;  
    // Demande à l'utilisateur de saisir un nombre entier positif
    printf("Entrez un nombre entier positif pour calculer sa factorielle : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("La factorielle n'est pas definie pour les nombres negatifs.\n");
        return 1; // Quitte le programme avec un code d'erreur
    }

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("%d! = %llu\n", n, fact);

    return 0;
}
