#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char Chain1[10] ,Chain2[10] ;
    printf("Donner la chaine 1 : ");
    gets(Chain1);
    printf("Donner la chaine 2 : ");
    gets(Chain2);
    printf("concatination : \n");
    strcat(Chain1,Chain2);
    printf("%s",Chain1);
    return 0;
}
