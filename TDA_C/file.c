
#include "file.h"

void initialisationFile (File * suite){

    suite->debut = NULL;
    suite->fin = NULL;
    suite->taille = 0;
}


/* enfiler (ajouter) un élément dans la file */
int enFiler (File * suite, ElementF * courant, int nVal){

    ElementF *nouveau_element;

    if ((nouveau_element = (ElementF *) malloc (sizeof (ElementF))) == NULL)
        return -1;

    nouveau_element->nDonnee=nVal;

    if(courant == NULL && suite->taille == 0){

        suite->fin = nouveau_element;
        nouveau_element->suivant = suite->debut;
        suite->debut = nouveau_element;

    }else {

        if(courant->suivant == NULL){
            suite->fin = nouveau_element;
            nouveau_element->suivant = courant->suivant;
            courant->suivant = nouveau_element;
        }
    }
    suite->taille++;
    return 0;
}

/* deFiler (supprimer) un élément de la file */
int deFiler (File * suite){

    ElementF *supp_element;

    if (suite->taille == 0)
        return -1;

    supp_element = suite->debut;
    suite->debut = suite->debut->suivant;

    free (supp_element);
    suite->taille--;

    return 0;
}

/* affichage de la file */
void afficheFile(File *suite){

    ElementF *courant;
    int i;

    courant = suite->debut;

    for(i=0;i<suite->taille;++i){
        printf(" %d ", courant->nDonnee);
        courant =  (ElementF*)courant->suivant;
    }
}
