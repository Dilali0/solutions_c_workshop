#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int somme = 0;

    printf("Entrez un nombre entier positif : ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Veuillez entrer un nombre entier positif.\n");
        return 1; // Quitte le programme avec un code d'erreur
    }

    for (int i = 1; i <= n; i++) {
        somme += i;
    }

    printf("La somme des %d premiers nombres naturels est : %d\n", n, somme);

    return 0;
}
