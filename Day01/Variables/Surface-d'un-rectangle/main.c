#include <stdio.h>
#include <stdlib.h>

int main()
{
    float longueur, largeur ,surface;

    printf("Entrez la longueur : ");
    scanf("%f", &longueur);

    printf("Entrez la largeur : ");
    scanf("%f", &largeur);

    surface = longueur * largeur;

    printf("La surface du rectangle est : %.2f\n", surface);
    return 0;
}
