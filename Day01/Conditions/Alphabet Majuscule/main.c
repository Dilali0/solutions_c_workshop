#include <stdio.h>
#include <stdlib.h>

int main() {
char caractere;

    printf("Entrez un caractere: ");
    scanf("%c", &caractere);

    
    if (caractere >= 'A' && caractere <= 'Z') {
        printf("Le caractere '%c' est une lettre majuscule.\n", caractere);
    } else {
        printf("Le caractere '%c' n'est pas une lettre majuscule.\n", caractere);
    }

    return 0;
}
