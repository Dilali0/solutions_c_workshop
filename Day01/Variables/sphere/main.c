#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float rayon , volume;

    printf("Entrez le rayon : ");
    scanf("%f", &rayon);

    volume = (4.0 / 3.0) * M_PI * pow(rayon, 3);

    printf("Le volume de la sph�re est : %.2f\n", volume);

    return 0;
}
