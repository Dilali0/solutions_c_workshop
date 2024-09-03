#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vitesse_kmh ,vitesse_ms;

    printf("Entrez la vitesse (km/h) : ");
    scanf("%f", &vitesse_kmh);
    vitesse_ms = vitesse_kmh * 0.27778;
    printf("La vitesse en (m/s) est : %.2f\n", vitesse_ms);
    return 0;
}
