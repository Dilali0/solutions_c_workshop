#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C ;
    float K ;
    printf("Donner la temp�rature en Celsius : \ ");
    scanf("%d",&C);
    K = C + 273.15 ;
    printf("La temp�rature en Kelvin est : %.2f",K);
    return 0;
}
