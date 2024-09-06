#include <stdio.h>
#include <stdlib.h>

   int n ;
    printf("Donner le nombre d'etoiles");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++) {
        // Imprimer les espaces avant les étoiles
        for (int j = i; j < n; j++) {
            printf(" ");
        }

        // Imprimer les étoiles
        for (int j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }

        // Passer à la ligne suivante
        printf("\n");
    }

    return 0;
}
