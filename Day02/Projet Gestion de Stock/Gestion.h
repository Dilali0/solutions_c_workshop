#ifndef GESTION
#define GESTION

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Global Variables
extern char titre[100][100];
extern char auteur[100][100];
extern float Prix[100];
extern int Quantite[100];
extern int Nombre_livres;

// Function prototypes
void mainMenu();
void Ajouter();
void Afficher();
void Rechercher();
void MiseAjour();
void Supprimer();
void TotalStock();


#endif // GESTION
