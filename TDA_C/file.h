#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED


/*********************\
* file.h *
\*********************/
#include<stdlib.h>
#include<stdio.h>



typedef struct ElementListe{
    int nDonnee;
    struct ElementListe *suivant;
} ElementF;



typedef struct FileRepere{
    ElementF *debut;
    ElementF *fin;
    int taille;
} File;




/* initialisation */
extern void initialisationFile (File * suite);

/* ENFILER*/
extern int enFiler (File * suite, ElementF * courant, int nVal);

/* DE_FILER*/
extern int deFiler (File * suite);

/* FirstInFirstOut */
#define file_donnee(suite) suite->debut->donnee

/* Affiche la file */
extern void afficheFile(File *suite);


#endif // FILE_H_INCLUDED
