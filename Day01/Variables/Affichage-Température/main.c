#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C ;
    printf("Donner temperature en Celsius  : \n");
    scanf("%d",&C);
    if(C < 0 ){
         printf("Solide");
    }else if(0 <= C && C < 100 ){
         printf("Liquide");
    }else
    printf("Gaz");
    return 0;
}
