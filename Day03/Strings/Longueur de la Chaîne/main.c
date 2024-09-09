#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int l = 0 ;
    char Chain [10];
    printf("donner Chain : ");
    scanf("%s",&Chain);
    for(int i = 0 ; Chain[i] != '\0' ; i++){
        l++;
    }
    printf("longueur est : %d",l);

    return 0;
}
