#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
    char titre[100][100];
    char auteur[100][100] ;
    float Prix[100];
    int Quantite[100];
    int Nombre_livres = 0 ;
    //-------------------------------------Menue----------------------------------------------------
    void mainMenu() {

         int choice ;
    while(1) {
          system("cls");
        printf("\n====== Main Menu ===============\n");
        printf(" 1. Ajouter un livre au stock \n");
        printf(" 2. Afficher tous les livres disponibles.\n");
        printf(" 3. Rechercher un livre par son titre.\n");
        printf(" 4. Mettre à jour la quantité d'un livre.\n");
        printf(" 5. Supprimer un livre du stock \n");
        printf(" 6. Afficher le nombre total de livres en stoc \n");
        printf(" 7. exit(0) \n");

        printf("Enter your choice :");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                Ajouter();
                break;
            case 2:
                Afficher();
                break;
            case 3:
                Rechercher();
                break;
            case 4:
                MiseAjour();
                break;
            case 5:
                Supprimer();
                break;
            case 6:
                TotalStock();
                break;

            case 7:
                exit(0);  // Exit the program
            default:
                printf("choix invalid !\n");
        }

    }
}
    //------------------------------------Ajouter Livres----------------------------------------
void Ajouter(){
    system("cls");
     printf("Donner le titre de livre : \n ");
     scanf("%s",&titre[Nombre_livres]) ;
     //==========Auteur========================
     printf("Donner l'auteur : ");
     //fflush(stdin);
     scanf("%s",&auteur[Nombre_livres]);
     //==============Prix==========================
     printf("Donner le prix : ");
     scanf("%f",&Prix[Nombre_livres]);
     //=========================================
     printf("Donner le  quantite : ");
     scanf("%d",&Quantite[Nombre_livres]);
     //=========================================
     Nombre_livres++ ;
     printf("Ajouter avec success ! ");
    }
    //--------------------------------------Afficher Livres-----------------------------------------------------
void Afficher(){
    system("cls");
    if(Nombre_livres !=0){
        for(int i = 0 ; i< Nombre_livres  ; i++){
            printf(" - %d  titre  :  %s  , Auteur : %s , prix : %f ,quantitee : %d \n ",i+1 ,titre[i],auteur[i],Prix[i],Quantite[i] );
        }
    }
}
//------------------------------------------Recherche----------------------------------------------------------
 void Rechercher(){
     char title_name [10];
     printf("Donne le titre de live a rechercher :");
     scanf("%s",title_name) ;

 }
//-------------------------------------------Update-------------------------------------------------------------------
 void MiseAjour(){
    //--------------------------
}
//--------------------------------------------Supprimer------------------------------------------------------------------

 void Supprimer(){

 }
//---------------------------------------------Total Stock ------------------------------------------------------
 void TotalStock(){
 }
//--------------------------------------------------------------------------------------------------------------
int main()
{
    mainMenu();
    return 0;
}
