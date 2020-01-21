#ifndef PILE_H_INCLUDED
#define PILE_H_INCLUDED

/********************\

 *      pile.h       *
\*********************/

#include<stdio.h>
#include<stdlib.h>



typedef struct ElementPile{
    int nDonnee;
    struct ElementPile *suivant;
} ElementP;


typedef struct PileRepere{
    ElementP *debut;
    int taille;
} Pile;



/* initialisation */
extern void initialisationPile (Pile *tas);

/* EMPILER*/
extern int empiler (Pile *tas, int nVal);

/* DEPILER*/
extern int depiler (Pile *tas);

/* Affichage de élément en haut de la pile (LastInFirstOut) */

/* Affiche la pile */
extern void affichePile (Pile *tas);




#endif // PILE_H_INCLUDED
