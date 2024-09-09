#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Tab1[10],Tab2[10]. Taille ;
    //------------------------Taille-------------------------------
    printf("Donner la taille de votre tableau : ");
    scanf("%d",&Taille);
    //-----------------------Saisir --------------------------------
    for(int i = 0 ; i< Taille ; i++){
        printf("Entrez la %d valeur : " , i+1);
        scanf("%d",&Tab[i]);
    }
    //---------------------------Copy----------------------------------
     for(int i = 0 ; i< Taille ; i++){
       Tab2[i] = Tab1[i] ;
    }
    //------------------------------------------------------
    printf("Copy : \n");
    for(int i = 0 ; i< Taille ; i++){
       printf(" %d ",Tab2[i])
    }
    return 0;
}
