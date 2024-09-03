#include <stdio.h>
#include <stdlib.h>

int main()
{

    int Km ;
    float Yards ;
    printf(" Donner  la distance en kilometres : \n");
    scanf("%d",&Km);
    Yards = Km * 1093.61;
    printf(" La distance en yards est : %.2f",Yards);
    return 0;
}
