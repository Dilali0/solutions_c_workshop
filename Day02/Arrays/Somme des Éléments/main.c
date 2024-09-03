#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Tab[10], Taille ,Somme = 0 ;
    //------------------------Taille-------------------------------
    printf("Donner la taille de votre tableau : ");
    scanf("%d",&Taille);
    //-----------------------Saisir --------------------------------
    for(int i = 0 ; i< Taille ; i++){
        printf("Entrez la %d valeur : " , i+1);
        scanf("%d",&Tab[i]);
    }
    //-------------------------Somme --------------------------------------
    for(int i = 0 ; i < Taille ; i++){
        Somme+= Tab[i];
    }
    printf("La somme est : %d",Somme );
    return 0;

}
