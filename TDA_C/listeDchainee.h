#ifndef LISTDCHAINEE_H_INCLUDED
#define LISTDCHAINEE_H_INCLUDED

//Liste doublement chainee

typedef struct dl_ElementListe {
    int nDonnee;
    struct dl_ElementListe *precedent;
    struct dl_ElementListe *suivant;

}dl_Element;


typedef struct dl_ListeRepere {
    dl_Element *debut;
    dl_Element *fin;
    int taille;

}dl_Liste;

//Init Liste
void initialisationListeDouble (dl_Liste *liste);

//insertion dans une Liste Vide
int insDansListeDVide (dl_Liste * liste, int nVal);

//insertion en debut de liste
int insDebutListeD (dl_Liste * liste, int nVal);

//insertion en Fin de liste
int insFinListeD (dl_Liste * liste, int nVal);

//Insertion avant une position
int insAvantD (dl_Liste * liste, int nVal, int pos);


//Insertion apres une position
int insApresD (dl_Liste * liste, int nVal, int pos);

//Suppression a une position
int suppD(dl_Liste *liste, int pos);

void detruire(dl_Liste *liste);

//Affiche Liste doublement chainee
void afficheListeD(dl_Liste *liste);

//Affiche Inv Liste doublement chainee
void affiche_invListeD(dl_Liste *liste);
#endif // LISTDCHAINEE_H_INCLUDED
