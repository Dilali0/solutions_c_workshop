#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    //-----------------------------Declaration d varaibales------------------------------------------
    int age ;
    char  nom[100] ,prenom[100] ,adresseEmail[100] ;
    char sexe ;
    //------------------------------- ecrire et lire les donnees ----------------------------------------
    printf("Entrez votre nom : ");
    gets(nom);
    //-
    printf("Entrez votre prenom: ");
    gets(prenom);
    //-
    printf("Entrez votre age: ");
    scanf("%d", &age);
    //-
    printf("Entrez votre sexe (M/F): ");
    scanf(" %c",&sexe);
    //-
    printf("Entrez votre adresse email: ");
    scanf("%s",adresseEmail );
    // ----------------------------Afficher les donnes -----------------------------------------
    printf("Nom: %s \n", nom);
    printf("Prenom: %s\n", prenom);
    printf("Age: %d\n", age);
    printf("Sexe: %c\n", sexe);
    printf("Email: %s\n", adresseEmail);


    return 0;
}
