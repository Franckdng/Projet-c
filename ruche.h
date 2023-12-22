//---------------------------------------------------------------
//  DEFINE
//---------------------------------------------------------------
#ifndef RUCHE_H
#define RUCHE_H

//---------------------------------------------------------------
//  INCLUDE
//---------------------------------------------------------------
    #include <stdio.h>
    #include <string.h>
    #include <math.h>
    #include <stdlib.h>
//---------------------------------------------------------------
//  STRUCTURE
//---------------------------------------------------------------
typedef struct Abeille Abeille;
typedef struct Liste Liste;
typedef struct
{
    int x;
    int y;
}point;

struct Liste
{
    Abeille* premier;
    int nb;
};

struct Abeille
{
    int identifiant;
    int pv;
    char statut[25] ;
    Position* Position;
    int faim;
    Abeille* suivant;
};
typedef struct
{
    Abeille* abeille;
    int pondre;
}Reine;

typedef struct
{
    Abeille* abeille;
    int miel ;
    int nb ;
}abeille_ouvriere;

/*

typedef struct
{
    int identifiant ;
    char statut ;
    int pv ;
    int faim ;
    point* position ;
    abeille* suivant ;

}abeille ;

typedef struct
{
    int pv = 1825;
    int faim ;
    
}reine ;

typedef struct
{
    int pv = 45;
    int faim ;
}ouvriere

*/

// typedef struct
// {
//     char statut ;
//     StatutNoeud* gauche ;
//     StatutNoeud* droit ;
// }StatutNoeud;

// typedef struct
// {
//     Liste liste ;
//     int stock;
//     int nourriture [500];
//     int stock_miel [50];
//     int ruche_taille [250];
//     int population ; 
// }Ruche;


// typedef struct
// {
//      abeille population ;
//      int tour ;
//      fleur fleur ;
//      point xfleur;
//      point yfleur;
// }monde;

// typedef struct
// {
//   int pv;
//   int nb_frelon;  
// }frelon;
 
 //typedef struct 
 //{
 //    int nourriture;
 //}fleur;
 

//---------------------------------------------------------------
//  PROTOTYPE
//---------------------------------------------------------------

// Liste des fonctions  :
// Liste* initbee(); //Fonction pour initialiser une abeille par l'utilisateur
reine initReine();
// initWorld(); //Fonction pour initialiser le monde
// initWorldEX(); //Fonction pour initialiser le monde extérieure
// initRuche() : //Fonction pour initialiser une ruche
// initFleur(); //Fonction pour créer une fleur qui contient peut-être de la nourriture
// POPfoodFlower(); //Fonction pour faire apparaitre aléatoirement de la nourriture à une position
// insertStatut(); //Fonction pour insérer un statut dans l'arbre binaire StatutNoeud
// Naissance(); //Fonction pour faire naitre des abeilles via la reine
// pondre(); //Fonction pour les oeufs de l'abeilles
// Naturaldeath(); //Fonction pour la durée de vie d'une abeille
// mouvement(); //Fonction pour le déplacement d'une abeille
// RecupFood(); //Fonction pour recupérer la nourriture dans la fleur
// Manger(); //Fonction pour nourrir les abeilles
// attaque_abeille();
// Mourrir();

#endif