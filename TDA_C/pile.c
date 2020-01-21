

#include "pile.h"




void initialisationPile (Pile * tas){
  tas->debut = NULL;
  tas->taille = 0;
}




/* empiler (ajouter) un élément dans la pile */
int empiler (Pile * tas, int nVal){

    ElementP *nouveau_element;

    //Creation d'un maillon qui sera inséré dans la pile
    if ((nouveau_element = (ElementP *) malloc (sizeof (ElementP))) == NULL)
            return -1;

    nouveau_element->nDonnee=nVal;
    nouveau_element->suivant = tas->debut;

    //Insertion de l'element dans la pile
    tas->debut = nouveau_element;
    tas->taille++;//Incrémentation de la pile

    return 0;
}


/* depiler (supprimer un élément de la pile */
int depiler (Pile * tas){

    ElementP *supp_element;

    if (tas->taille == 0)
      return -1;

    supp_element = tas->debut;
    tas->debut = tas->debut->suivant;
    free (supp_element);
    tas->taille--;

  return 0;
}



/* affichage de la pile */
void affichePile (Pile * tas){

  ElementP *courant;
  int i;
  courant = tas->debut;

  for(i=0;i<tas->taille;++i){
    printf("\t\t%d\n", courant->nDonnee);
    courant = (ElementP*)courant->suivant;
  }
}
