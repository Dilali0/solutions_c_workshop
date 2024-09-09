#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int x ;
    int y ;
}Point ;
int main()
{
    Point P1 ;
    Point *p = &P1 ;
    printf("Donner point x : ");
    scanf("%d",&p->x) ;
    printf("Donner point y : ");
    scanf("%d",&p->y) ;
    //-----------------------------------Affichage
    printf("le point x est : %d \n",P1.x);
    printf("le point y est : %d \n",P1.y);
    return 0;
}
