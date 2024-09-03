#include <stdio.h>
#include <stdlib.h>

int main()
{
     int Tab[10], Taille , tmp ;
    //------------------------Taille-------------------------------
    printf("Donner la taille de votre tableau : ");
    scanf("%d",&Taille);
    //-----------------------Saisir --------------------------------
    for(int i = 0 ; i< Taille ; i++){
        printf("Entrez la %d valeur : " , i+1);
        scanf("%d",&Tab[i]);
    }
    //-------------------------Somme --------------------------------------
    for(int i = 0 ; i < Taille ; i++)
        for(int j = i + 1 ; j< Taille ; j++ ){
           if(Tab[i] > Tab[j]){
            tmp = Tab[i] ;
            Tab[i] = Tab[j] ;
            Tab[j] = tmp ;
           }
    }
    //--------------------------------------------------------------------------
    printf("Voici votre tableau en ordre croissant : \n");

     for(int i = 0 ; i< Taille ; i++){
        printf(" %d ",Tab[i]);
    }

    return 0;
}
