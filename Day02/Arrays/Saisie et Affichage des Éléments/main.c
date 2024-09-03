#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Tab[10], Taille ;
    //------------------------Taille-------------------------------
    printf("Donner la taille de votre tableau : ");
    scanf("%d",&Taille);
    //-----------------------Saisir --------------------------------
    for(int i = 0 ; i< Taille ; i++){
        printf("Entrez la %d valeur : " , i+1);
        scanf("%d",&Tab[i]);
    }
    //-------------------------Affichage-------------------------------
    printf("Voici les valeurs de votre tableau");
    for(int i = 0 ; i < Taille ; i++){
        printf(" - %d \n",Tab[i]);
    }
    return 0;
}
