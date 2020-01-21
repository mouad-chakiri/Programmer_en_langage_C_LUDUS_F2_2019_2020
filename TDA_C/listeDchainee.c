#include "listeDchainee.h"
#include <stdlib.h>
#include <stdio.h>

//initialisation de la liste doublement chainee
void initialisationListeDouble (dl_Liste *liste){

    liste->debut = NULL;
    liste->fin = NULL;
    liste->taille = 0;

}

//insertion dans une Liste Vide
int insDansListeDVide (dl_Liste * liste, int nVal){

    dl_Element *nouveau_element;

    if ((nouveau_element =  (dl_Element*) malloc(sizeof(dl_Element))) == NULL) return -1;

    nouveau_element->nDonnee=nVal;

    nouveau_element->precedent = liste->debut;
    nouveau_element->suivant = liste->fin;

    liste->debut = nouveau_element;
    liste->fin = nouveau_element;

    liste->taille++;

return 0;

}


//insertion en debut de liste
int insDebutListeD (dl_Liste * liste, int nVal){

    dl_Element *nouveau_element;

    if ((nouveau_element =  (dl_Element*) malloc(sizeof(dl_Element))) == NULL)
    return -1;

    nouveau_element->nDonnee=nVal;

    nouveau_element->precedent = NULL;
    nouveau_element->suivant = liste->debut;

    liste->debut->precedent = nouveau_element;
    liste->debut = nouveau_element;

    liste->taille++;

    return 0;

}


//insertion en Fin de liste
int insFinListeD (dl_Liste * liste, int nVal){

    dl_Element *nouveau_element;

     if ((nouveau_element =  (dl_Element*) malloc(sizeof(dl_Element))) == NULL)
        return -1;

    nouveau_element->nDonnee=nVal;

    nouveau_element->suivant = NULL;
    nouveau_element->precedent = liste->fin;
    liste->fin->suivant = nouveau_element;

    liste->fin = nouveau_element;
    liste->taille++;


return 0;

}

//Insertion avant une position
int insAvantD (dl_Liste * liste, int nVal, int pos){
    int i;
    dl_Element *nouveau_element, *courant;

   if ((nouveau_element =  (dl_Element*) malloc(sizeof(dl_Element))) == NULL)
        return -1;


    nouveau_element->nDonnee=nVal;

    courant = liste->debut;

    for (i = 1; i < pos; ++i)
        courant = courant->suivant;

        nouveau_element->suivant = courant;
        nouveau_element-> precedent = courant->precedent;

        if(courant->precedent == NULL)
            liste->debut = nouveau_element;
        else courant->precedent->suivant = nouveau_element;
            courant->precedent = nouveau_element;

        liste->taille++;

return 0;

}

//Insertion apres une position
int insApresD (dl_Liste * liste, int nVal, int pos){

    int i;
    dl_Element *nouveau_element, *courant;

      if ((nouveau_element =  (dl_Element*) malloc(sizeof(dl_Element))) == NULL)
        return -1;

    nouveau_element->nDonnee=nVal;

    courant = liste->debut;

    for (i = 1; i < pos; ++i)
        courant = courant->suivant;

    nouveau_element->suivant = courant->suivant;
    nouveau_element->precedent = courant;

    if(courant->suivant == NULL)
        liste->fin = nouveau_element;
    else
        courant->suivant->precedent = nouveau_element;

    courant->suivant = nouveau_element;
    liste->taille++;

    return 0;
}

//Suppression a une position
int suppD(dl_Liste *liste, int pos){

        int i;
        dl_Element *supp_element,*courant;

        if(liste->taille == 0) return -1;

            if(pos == 1){ /* suppresion de 1er élément */

                supp_element = liste->debut;

                liste->debut = liste->debut->suivant;

                if(liste->debut == NULL)
                    liste->fin = NULL;
                else
                    liste->debut->precedent = NULL;


           }else if(pos == liste->taille){ /* suppression du dernier élément */

               supp_element = liste->fin;
               liste->fin->precedent->suivant = NULL;
               liste->fin = liste->fin->precedent;

            }else { /* suppression ailleurs */
                    courant = liste->debut;

                    for(i=1;i<pos;++i)
                        courant = courant->suivant;

                    supp_element = courant;
                    courant->precedent->suivant = courant->suivant;
                    courant->suivant->precedent = courant->precedent;
            }


            free(supp_element);
            liste->taille--;
return 0;
}

//Affiche Liste doublement chainee
void detruire(dl_Liste *liste){

        while(liste->taille > 0)
            suppD(liste,1);
}


//Affiche Inv Liste doublement chainee
void afficheListeD(dl_Liste *liste){
    dl_Element *courant;
    courant = liste->debut;
    printf("[ ");
        while(courant != NULL){
                printf("%d ",courant->nDonnee);
                courant = courant->suivant;
        }
    printf("]\n");
}


void affiche_invListeD(dl_Liste *liste){

    dl_Element *courant;
    courant = liste->fin;
    while(courant != NULL){
            printf("%d : ",courant->nDonnee);
            courant = courant->precedent;
    }
    printf("\n");

}
