#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C ;
    float K ;
    printf("Donner la température en Celsius : \ ");
    scanf("%d",&C);
    K = C + 273.15 ;
    printf("La température en Kelvin est : %.2f",K);
    return 0;
}
