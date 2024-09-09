#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int longueur ;
    int  largeur;

}rectangle;

int Aire(rectangle E1){
     return E1.longueur * E1.largeur ;
}
int main()
{
    rectangle E1 ;
    printf("Donner largeur : ");
    scanf("%d",&E1.largeur);
     printf("Donner longueur : ");
    scanf("%d",&E1.longueur);
    printf("L'aire de votre rectangle est  : %d ", Aire(E1));
    return 0;
}
