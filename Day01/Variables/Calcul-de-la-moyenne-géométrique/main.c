#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c;
    float moyenne_geometrique;

    printf("Entrez le premier nombre : ");
    scanf("%f", &a);

    printf("Entrez le deuxi�me nombre : ");
    scanf("%f", &b);

    printf("Entrez le troisi�me nombre : ");
    scanf("%f", &c);

    moyenne_geometrique = pow(a * b * c, 1.0/3.0);

    printf("La moyenne g�om�trique est : %.2f\n", moyenne_geometrique);

    return 0;
}
