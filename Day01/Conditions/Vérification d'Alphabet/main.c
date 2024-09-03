#include <stdio.h>
#include <stdlib.h>

int main() {
    char caractere;

    printf("Entrez un caractere: ");
    scanf("%c", &caractere);

    // Verifie si le caractère est un alphabet
    if ((caractere >= 'A' && caractere <= 'Z') || (caractere >= 'a' && caractere <= 'z')) {
        // Si c est un alphabet, verifie s il est majuscule ou minuscule
        if (caractere >= 'A' && caractere <= 'Z') {
            printf("Le caractere '%c' est une lettre majuscule.\n", caractere);
        } else {
            printf("Le caractère '%c' est une lettre minuscule.\n", caractere);
        }
    } else {
        printf("Le caractere '%c' n'est pas une lettre de l alphabet.\n", caractere);
    }

    return 0;
}
