#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, resultat;

  
    printf("Entrez le premier nombre entier : ");
    scanf("%d", &num1);

    printf("Entrez le deuxieme nombre entier : ");
    scanf("%d", &num2);

    resultat = somme(num1, num2);

    // Affichage du résultat
    printf("La somme de %d et %d est : %d\n", num1, num2, resultat);

    return 0;
}



