#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Tab[10], Taille ,Maximum ;
    //------------------------Taille-------------------------------
    printf("Donner la taille de votre tableau : ");
    scanf("%d",&Taille);
    //-----------------------Saisir --------------------------------
    for(int i = 0 ; i< Taille ; i++){
        printf("Entrez la %d valeur : " , i+1);
        scanf("%d",&Tab[i]);
    }
    //-------------------------Somme --------------------------------------
    Maximum = Tab[0] ;
    for(int i = 0 ; i < Taille ; i++){
           if(Tab[i]>Maximum){
            Maximum = Tab[i];
           }
    }
    printf("Le Maximum est : %d ",Maximum);
    return 0;
}
