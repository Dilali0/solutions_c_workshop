#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
   char  titre [100];
   char  auteur [100] ;
   int   annee ;
}Livre ;
Livre Info(Livre L1){

    strcpy(L1.titre,"Livre1");
    strcpy(L1.auteur,"auteur1");
    L1.annee = 2000 ;
    return L1;
}
int main()
{
    Livre L2 = Info(L2);
    printf(" le titre est : %s \n",L2.titre);
     printf(" l'auteur  est : %s \n",L2.auteur);
     printf(" l' anne est : %d \n",L2.annee);
    return 0;
}
