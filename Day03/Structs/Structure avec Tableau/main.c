#include <stdio.h>
#include <stdlib.h>
typedef struct{
    char name[100];
    char prenom[10];
    int Notes[5];

}etudiant ;
int main()
{
    etudiant E1  ;
    int Nombres ;
    printf("Donner un Nom : \n");
    scanf("%s",E1.name);
    printf("Donner un Prenom : \n");
    scanf("%s",E1.prenom);
    printf("Donner le nombre de notes : \n");
    scanf("%d",&Nombres);
    //-------------------------------------Saidir notes
    for(int i = 0 ; i <Nombres ; i++ ){
        printf("Donner la %d note : " , i+1 );
        scanf("%d",&E1.Notes[i]);
    }
    ///-----------------------------------Affichage
    printf("Votre Nom est : %s ",E1.name);
    printf("Votre Prenom est : %s ",E1.prenom);
    printf("les notes sont : ");
    for(int i = 0 ;i<Nombres; i++){
        printf("%d \n",E1.Notes[i]);
    }
    return 0;
}
