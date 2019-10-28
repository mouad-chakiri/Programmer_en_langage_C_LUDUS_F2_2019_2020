#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAILLE 10


//Prototypes
void afficheMatrice(int[][TAILLE]);
void initMatrice(int[][TAILLE],int);
void initMatrice2(int [][TAILLE],int,int);
int nSommeEltMatrice(int [][TAILLE],int);


//Les tableaux 2 dim, fcts et procedures


int main()
{
    //Tableau 2 dim Entiers
    int nMatriceEntier[TAILLE][TAILLE];

    int nMatriceEntier2[5][TAILLE];

    initMatrice(nMatriceEntier,5);
    afficheMatrice(nMatriceEntier);

    initMatrice2(nMatriceEntier2,5,10);


    int i,j;

    //Affichage Matrice

    for(i=0;i<5;i++){//Lignes

        for(j=0;j<TAILLE;j++){ //Colonnes

           printf("%d",nMatriceEntier2[i][j]);

        }
        printf("\n");
    }

    int nResSommeMatrice=nSommeEltMatrice(nMatriceEntier2,5);
    printf("Resultat de la somme de notre matrice : %d",nResSommeMatrice);




    return 0;
}


//Implementations des fonctions

//Procedures



//Init

void initMatrice(int nMatriceEntier[][TAILLE],int nValInit){


   int i,j;

    //Initialisation Matrice

    for(i=0;i<TAILLE;i++){

        for(j=0;j<TAILLE;j++){

            nMatriceEntier[i][j]=nValInit;
        }
    }



}

void initMatrice2(int nMatriceEntier[][TAILLE],int nNVal,int nValInit){


   int i,j;

    //Initialisation Matrice

    for(i=0;i<nNVal;i++){

        for(j=0;j<TAILLE;j++){

            nMatriceEntier[i][j]=nValInit;
        }
    }



}


//Calcul

int nSommeEltMatrice(int nMatriceEntier[][TAILLE],int nNVal){

    int nResSommeMatrice=0;

    int i,j;

    for(i=0;i<nNVal;i++){

        for(j=0;j<TAILLE;j++){

            nResSommeMatrice+=nMatriceEntier[i][j];
        }
    }

    return nResSommeMatrice;

}





//Layout

void afficheMatrice(int nMatriceEntier[][TAILLE]){


     int i,j;

    //Affichage Matrice

    for(i=0;i<TAILLE;i++){//Lignes

        for(j=0;j<TAILLE;j++){ //Colonnes

           printf("%d",nMatriceEntier[i][j]);

        }
        printf("\n");
    }


}






