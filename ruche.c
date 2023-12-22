
//---------------------------------------------------------------
// INCLUDE
//---------------------------------------------------------------

#include "ruche.h"
f
//---------------------------------------------------------------
// PROTOTYPE
//---------------------------------------------------------------




/*


int PositionUtilisee()
int IdenfitiantUtilisee()

Position* initRandomPosition() {
    Position* position = malloc(sizeof(*position)) ;
    if (position == NULL)
    {
        printf("Erreur lors de l'allocation de memoire.\n") ;
        exit(EXIT_FAILURE) ;
    }
    position->x = rand() % 100; // Modifiez la plage selon vos besoins
    position->y = rand() % 100;
    return position;
}

int PositionUtilisee(Liste *liste, int x, int y)
{
    Abeille* courant = liste->premier ;
    while (courant != NULL)
    {
        if (courant->Position->x == x && courant->Position->y == y)
        {
            return 1 ; // Position occupée
        }
        courant = courant->suivant ;
    }
    return 0 ; // Position non occupée
}


int IdentifiantUtilisee(Liste *liste, int identifiant)
{
    Abeille* courant = liste->premier ;
    while (courant != NULL)
    {
        if (courant->identifiant == identifiant)
        {
            return 1 ; // Identifiant utilisee
        }
        courant = courant->suivant ;
    }
    return 0 ; // Identifiant libre
}

Abeille* initAbeilleReine(Liste* liste)
{
    Abeille* nouvelleAbeille ;
    nouvelleAbeille->Position = initRandomPosition() ;
    while (PositionUtilisee(liste,nouvelleAbeille->Position->x, nouvelleAbeille->Position->y) == 1)
    {
        free(nouvelleAbeille->Position) ;
        nouvelleAbeille->Position = initRandomPosition() ;
    }
    while (IdentifiantUtilisee(liste,nouvelleAbeille->identifiant) == 1)
        nouvelleAbeille->identifiant = rand() % 251 ;
        while (IdentifiantUtilisee)

    strcpy(nouvelleAbeille->statut, "Reine") ;
    nouvelleAbeille->pv = 1825 ;
    nouvelleAbeille->faim = 10 ;

    return nouvelleAbeille ;
};

void Pondre(Reine* maReine, Liste* liste, int nombreOeufs) // Fonction pondre sans prendre en compte les tours
{
    for (int i = 0 ; i < nombreOeufs ; i++)
    {
        Abeille* nouvelOeuf = malloc(sizeof(nouvelOeuf)) ;

        if (nouvelOeuf == NULL)
        {
            printf("Erreur lors de l'allocatioon de memoire.\n");
            exit(EXIT_FAILURE);
        }

        nouvelOeuf->identifiant = maReine->pondre + 1 ;
        maReine->pondre++ ;
        nouvelOeuf->suivant = NULL;

        if (liste->premier == NULL)
        {
            liste->premier = nouvelOeuf;
        }
        else
        {
            Abeille* courant = liste->premier;
            while (courant->suivant != NULL)
            {
                courant = courant->suivant;
            }
            courant->suivant = nouvelOeuf;
        }

        liste->nb++;
        }
}

Liste* maListe = malloc(sizeof(maListe)) ;
if (maListe == NULL)
{
    erreur blabla
}
Liste->premier = initAbeilleReine(maListe) ;

Liste* initsalarie(int nombre)
{
    Liste* liste=malloc(sizeof(*liste));
    Salarie* Salaria=malloc(sizeof(*Salaria));
    //Tete initialisation
    liste->premier = reine;
    if(nombre>50)exit(EXIT_FAILURE);                //initialisation trop grande
    if(Salaria != NULL|| liste!= NULL)              
    {
        strcpy(Salaria->nom,"rien");            
        strcpy(Salaria->prenom,"rien");
        Salaria->id = 0;
        strcpy(Salaria->service,"rien");
        Salaria->salaire=0;
        for(int i=1;i<=nombre;i++){
            //initialisation
                Salarie* currentSalarie=malloc(sizeof(*currentSalarie));
                Salaria->suivant = currentSalarie;
                Salaria = Salaria->suivant;
                strcpy(Salaria->nom,"rien");
                strcpy(Salaria->prenom,"rien");
                Salaria->id = 0;
                strcpy(Salaria->service,"rien");
                Salaria->salaire=0;
            Salaria->suivant = NULL;
            liste->nborb=i;
            printf("liste= %i initialiser\r\n",liste->nborb);
        }
    return liste;
    }
    //sortie si erreur
    else {
        exit(EXIT_FAILURE);
        return liste;
    }
}

abeille* AjouteAbeille()
{
    int identifiant ;
    char statut ;
    int age ;
    int pv ;

    abeille* nouvelleAbeille = malloc(sizeof(*nouvelleAbeille));

    printf("Saisir un identifiant de l'abeille.\n"); 
    scanf("%d",&idenfitiant);

    printf("Saisir le statut de l'abeille.\n");
    scanf("%d",&statut);

    printf("Saisir l'age de l'abeille");
    scanf("%d",&age);

    printf("Saisir les pv de l'abeille");
    scanf("%d",&pv);
 
    nouvelleAbeille->identifiant = identifiant;
    nouvelleAbeille->statut = statut ;
    nouvelleAbeille->age = age;
    nouvelleAbeille->pv = pv;
    return nouvelleAbeille ;
    free(nouvelleAbeille) ;
};
*/

initWorld(){

    monde.population = initAbeille();

    monde.tour = 0;
    
}

    initWorldEX(){

        
    }

 Ruche initRuche()
 {
     Ruche nouvelleRuche;
    

    nouvelleRuche.stock = 0;

   
    for (int i = 0; i < 500; i++) {
        nouvelleRuche.nourriture[i] = 0;
    }

    
    for (int i = 0; i < 50; i++) {
        nouvelleRuche.stock_miel[i] = 0;
    }


    for (int i = 0; i < 250; i++) {
        nouvelleRuche.ruche_taille[i] = 0;
    }

    return nouvelleRuche;
 }


POPfoodFlower(){




    
}


insertStatut(){

       StatueNoeud* Hierachie = malloc(sizeof(*Hierachie));
       
       if (Hierachie == NULL){
           printf("Erreur lors de l'allocation de memoire.\n") ;
           exit(EXIT_FAILURE) ;
       }

       Hierachie->statue = NULL
       Hierachie -> gauche = NULL;
       Hierachie -> droite = NULL;

       return Hierachie;

    
}

  Naissance(){


 



  }


    
pondre(){

    
    
    
    
}

Naturaldeath(){

    abeille.pv = abeille.pv - 1;

    if (abeille.pv = 0)
    {
        abeille.statut = ;
    }
    abeille.pv = 0;
    
    
}


mouvement(){


    
}

RecupFood(){

    fleur->nourriture = 5;
     if (fleur->nourriture > 0)
    {
        fleur->nourriture = fleur->nourriture - 1;
           
    }



}

Manger(){

   


}

