#include <stdio.h>
#include <stdlib.h>

int main()
{
    float N1, N2, N3;
    float moyenne_ponderee;

    printf("Entrez le premier nombre : ");
    scanf("%f", &N1);

    printf("Entrez le deuxi�me nombre : ");
    scanf("%f", &N2);

    printf("Entrez le troisi�me nombre : ");
    scanf("%f", &N3);

    moyenne_ponderee = (N1 * 2 + N2 * 3 + N3 * 5) / (2 + 3 + 5);

    printf("La moyenne pond�r�e est : %.2f\n", moyenne_ponderee);
    return 0;

    return 0;
}
