#include "Gestion.h"

// Global Variables
char titre[100][100];
char auteur[100][100];
float Prix[100];
int Quantite[100];
int Nombre_livres = 0;

//-------------------------------------Main Menu----------------------------------------------------
void mainMenu() {
    int choice;
    while (1) {
        printf("\n====== Main Menu ===============\n");
        printf(" 1. Ajouter un livre au stock \n");
        printf(" 2. Afficher tous les livres disponibles.\n");
        printf(" 3. Rechercher un livre par son titre.\n");
        printf(" 4. Mettre à jour la quantité d'un livre.\n");
        printf(" 5. Supprimer un livre du stock \n");
        printf(" 6. Afficher le nombre total de livres en stock \n");
        printf(" 7. exit(0) \n");

        printf("Enter your choice :");
        scanf("%d", &choice);

        switch (choice) {
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
                printf("choix invalide !\n");
        }
    }
}

//------------------------------------Ajouter Livre-------------------------------------------------
void Ajouter() {
    printf("Donner le titre de livre : \n ");
    scanf("%s", titre[Nombre_livres]);
    //==========Auteur========================
    printf("Donner l'auteur : ");
    fflush(stdin);
    scanf("%s", auteur[Nombre_livres]);
    //==============Prix==========================
    printf("Donner le prix : ");
    scanf("%f", &Prix[Nombre_livres]);
    //=========================================
    printf("Donner la quantité : ");
    scanf("%d", &Quantite[Nombre_livres]);
    //=========================================
    Nombre_livres++;
    printf("Ajouté avec succès !\n");
}

//--------------------------------------Afficher Livres-----------------------------------------------------
void Afficher() {
    if (Nombre_livres != 0) {
        for (int i = 0; i < Nombre_livres; i++) {
            printf(" - %d  titre : %s, Auteur : %s, prix : %.2f, quantité : %d\n",
                    i + 1, titre[i], auteur[i], Prix[i], Quantite[i]);
        }
    } else {
        printf("Aucun livre disponible.\n");
    }
}

//------------------------------------------Rechercher----------------------------------------------------------
void Rechercher() {
    char title_name[100];
    int found = 0;
    printf("Donner le titre de livre à rechercher : ");
    scanf("%s", title_name);

    for (int i = 0; i < Nombre_livres; i++) {
        if (strcasecmp(titre[i], title_name) == 0) {
            printf("Votre livre :\n");
            printf(" - %d  titre : %s, Auteur : %s, prix : %.2f, quantité : %d\n",
                    i + 1, titre[i], auteur[i], Prix[i], Quantite[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Livre non trouvé.\n");
    }
}

//-------------------------------------------Mise à Jour-------------------------------------------------------------
void MiseAjour() {
    char Title_Update[100];
    int found = 0, Nouvelle_Quantite;

    printf("Donner le titre du livre dont vous voulez changer la quantité : ");
    scanf("%s", Title_Update);

    for (int i = 0; i < Nombre_livres; i++) {
        if (strcasecmp(titre[i], Title_Update) == 0) {
            printf("Donner la nouvelle quantité de %s : ", Title_Update);
            scanf("%d", &Nouvelle_Quantite);
            Quantite[i] = Nouvelle_Quantite;
            found = 1;
            printf("Mise à jour réussie.\n");
            break;
        }
    }

    if (!found) {
        printf("Livre non trouvé.\n");
    }
}

//-------------------------------------------Supprimer Livre-------------------------------------------------------------
void Supprimer() {
    char title_to_delete[100];
    int found = 0;

    printf("Donner le titre du livre à supprimer : ");
    scanf("%s", title_to_delete);

    for (int i = 0; i < Nombre_livres; i++) {
        if (strcasecmp(titre[i], title_to_delete) == 0) {
            for (int j = i; j < Nombre_livres - 1; j++) {
                strcpy(titre[j], titre[j + 1]);
                strcpy(auteur[j], auteur[j + 1]);
                Prix[j] = Prix[j + 1];
                Quantite[j] = Quantite[j + 1];
            }
            Nombre_livres--;
            found = 1;
            printf("Livre supprimé avec succès !\n");
            break;
        }
    }

    if (!found) {
        printf("Livre non trouvé.\n");
    }
}

//---------------------------------------------Total Stock ------------------------------------------------------
void TotalStock() {
    int total = 0;

    for (int i = 0; i < Nombre_livres; i++) {
        total += Quantite[i];
    }

    printf("Nombre total de livres en stock : %d\n", total);
}
