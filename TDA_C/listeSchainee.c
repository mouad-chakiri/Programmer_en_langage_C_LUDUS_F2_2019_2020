

#include "listeSchainee.h"

void initialisationListe (Liste * liste)
{
  liste->debut = NULL;
  liste->fin = NULL;
  liste->taille = 0;
}

/* insertion dans une liste vide */
int insListeVide (Liste * liste, int nVal){

  ElementL *nouveau_element;

  if ((nouveau_element = (ElementL*) malloc (sizeof (ElementL))) == NULL)
    return -1;


  nouveau_element->nDonnee= nVal;

  nouveau_element->suivant = NULL;
  liste->debut = nouveau_element;
  liste->fin = nouveau_element;
  liste->taille++;
  return 0;
}

/* insertion au début de la liste */
int insDebutListe (Liste * liste, int nVal){

  ElementL *nouveau_element;

  if ((nouveau_element = (ElementL *) malloc (sizeof (ElementL))) == NULL)
    return -1;

  nouveau_element->nDonnee=nVal;

  nouveau_element->suivant = liste->debut;
  liste->debut = nouveau_element;
  liste->taille++;
  return 0;
}

/*insertion à la fin de la liste */
int insFinListe (Liste * liste, ElementL * courant, int nVal){

  ElementL *nouveau_element;

  if ((nouveau_element = (ElementL *) malloc (sizeof (ElementL))) == NULL)
    return -1;

  nouveau_element->nDonnee=nVal;

  courant->suivant = nouveau_element;
  nouveau_element->suivant = NULL;

  liste->fin = nouveau_element;

  liste->taille++;
  return 0;
}

/* insertion à la position demandée */
int insListe (Liste * liste, int nVal, int pos){

  if (liste->taille < 2)
    return -1;
  if (pos < 1 || pos >= liste->taille)
    return -1;

  ElementL *courant;
  ElementL *nouveau_element;

  int i;

  if ((nouveau_element = (ElementL *) malloc (sizeof (ElementL))) == NULL)
    return -1;


  courant = liste->debut;
  for (i = 1; i < pos; ++i)
    courant = courant->suivant;

  if (courant->suivant == NULL)
    return -1;

  nouveau_element->nDonnee=nVal;

  nouveau_element->suivant = courant->suivant;
  courant->suivant = nouveau_element;
  liste->taille++;
  return 0;
}

/* suppression au début de la liste */
int suppDebut (Liste * liste){

  if (liste->taille == 0)
    return -1;

  ElementL *supp_element;
  supp_element = liste->debut;
  liste->debut = liste->debut->suivant;

  if (liste->taille == 1)
    liste->fin = NULL;


  free (supp_element);
  liste->taille--;

  return 0;
}

/* supprimer un element après la position demandée */
int suppDansListe (Liste * liste, int pos){

  if (liste->taille <= 1 || pos < 1 || pos >= liste->taille)
    return -1;

  int i;

  ElementL *courant;
  ElementL *supp_element;
  courant = liste->debut;

  for (i = 1; i < pos; ++i)
    courant = courant->suivant;

  supp_element = courant->suivant;
  courant->suivant = courant->suivant->suivant;

  if(courant->suivant == NULL)
          liste->fin = courant;

  free (supp_element);
  liste->taille--;


  return 0;
}

/* affichage de la liste */
void afficheListe (Liste * liste){

  ElementL *courant;
  courant = liste->debut;

  while (courant != NULL){
      printf ("%p - %d\n", courant, courant->nDonnee);
      courant = courant->suivant;
  }
}



