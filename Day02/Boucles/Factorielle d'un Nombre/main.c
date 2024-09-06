#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int fact = 1; 
   
    printf("Entrez un nombre entier positif pour calculer sa factorielle : ");
    scanf("%d", &n);

 
    if (n < 0) {
        printf("La factorielle n est pas définie pour les nombres negatifs \n");
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("%d! = %d \n", n, fact);

    return 0;
}
