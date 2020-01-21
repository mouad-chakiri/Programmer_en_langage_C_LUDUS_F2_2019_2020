#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

/*********************\
* liste.h *
\*********************/

typedef struct ElementListeChaine
{
  int nDonnee;
  struct ElementListeChaine *suivant;

} ElementL;

typedef struct ListeRepere
{
  ElementL *debut;
  ElementL *fin;
  int taille;

} Liste;

/* initialisation de la liste */
extern void initialisationListe (Liste * liste);


/* INSERTION */

/* insertion dans une liste vide */
extern int insListeVide (Liste * liste, int nVal);

/* insertion au début de la liste */
extern int insDebutListe (Liste * liste,int nVal);

/* insertion Ã a fin de la liste */
extern int insFinListe (Liste * liste, ElementL * courant, int nVal);

/* insertition ailleurs */
extern int insListe (Liste * liste, int nVal, int pos);


/* SUPPRESSION */

extern int suppDebut (Liste * liste);
extern int suppDansListe (Liste * liste, int pos);



extern void afficheListe (Liste * liste);

/* -------- FIN liste.h --------- */


#endif // LIST_H_INCLUDED
