#include <stdio.h>
#include <stdlib.h>
#include "pile.h"
#include "file.h"
#include "listeSchainee.h"
#include "listeDchainee.h"

int main()
{



//Pile LIFO

 /*  Pile *tas;

    if ((tas = (Pile *) malloc (sizeof (Pile))) == NULL)
        return -1;

    initialisationPile(tas);

    empiler(tas,10);
    empiler(tas,1);
    empiler(tas,8);
    empiler(tas,9);
    empiler(tas,100);
    empiler(tas,5);

    affichePile(tas);

    int taillePile=tas->taille;
    int i=0;


    for(i=0;i<taillePile;i++){
         depiler(tas);
    }


    putc('\n',stdout);
    affichePile(tas);

    //Debug
   // for(i=0;i<taillePile;i++){
   //     printf("%d\n",tas->debut->nDonnee);
    //    tas->debut=tas->debut->suivant;
   // }




    free(tas);*/


//File FIFO

   /* File *suite;

    if ((suite = (File *) malloc (sizeof (File))) == NULL)
        return -1;

    initialisationFile(suite);


    enFiler(suite,suite->fin,10);
    enFiler(suite,suite->fin,100);
    enFiler(suite,suite->fin,1000);
    enFiler(suite,suite->fin,10000);
    enFiler(suite,suite->fin,100000);

    afficheFile(suite);

    deFiler(suite);

    putc('\n',stdout);


    afficheFile(suite);


    free(suite);*/

    //Liste Simplement Chaine

    /* Liste *l;

    if ((l=(Liste*)malloc(sizeof(Liste))) == NULL)
        return -1;


    initialisationListe(l);

    insListeVide(l,1);
    insDebutListe(l,2);
    insListe(l,5,1);
    insFinListe(l,l->fin,3);

    afficheListe(l);

    suppDebut(l);
    suppDansListe(l,2);

    afficheListe(l);

    free(l);*/


    //Liste doublement Chaine

    dl_Liste *listeDouble;

    if((listeDouble=(dl_Liste*)malloc(sizeof(dl_Liste)))==NULL)
        return -1;


    initialisationListeDouble(listeDouble);

    insDansListeDVide(listeDouble,10);
    insDebutListeD(listeDouble,15);
    insFinListeD(listeDouble,100);
    insDebutListeD(listeDouble,1);
    insApresD(listeDouble,2,1);
    insAvantD(listeDouble,3,3);



    afficheListeD(listeDouble);
    affiche_invListeD(listeDouble);

    detruire(listeDouble);

    free(listeDouble);


    return 0;
}
