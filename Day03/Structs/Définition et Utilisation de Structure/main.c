#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
       char nom[100];
       char prenom[100] ;
       int age ;
    }personne;
int main()
{
    personne P1 ;
    strcpy(P1.nom,"Dilaly");
    strcpy(P1.prenom,"Ismail");
    P1.age = 23 ;
    printf("bonjour Mr %s %s vous avez %d ans ",P1.prenom,P1.nom , P1.age);

    return 0;
}
