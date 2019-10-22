#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAILLE 10
#define MOT "HELLO"

//Les entrées sorties conversationnelles


int main()
{
    //Exercice 1

    /*int nI, nN, nSom;

    nSom=0;
    for(nI=0;nI<4;nI++){
        printf("Donnez un entier\n");
        scanf("%d",&nN);
        nSom+=nN;
    }

    printf("Somme : %d\n",nSom);*/

   /* nI=0;//nI soit bien = 0
    while(nI<4){
        printf("Donnez un entier\n");
        scanf("%d",&nN);
        nSom+=nN;
        nI++; // ne pas oublier l'increment
    }

    printf("Somme : %d\n",nSom);


    nI=0;
    do{
        printf("Donnez un entier\n");
        scanf("%d",&nN);
        nSom+=nN;
        nI++;
    }while(nI<4);

    printf("Somme : %d\n",nSom);*/


    //exercice 2
   /* int nI=0;
    float fltMoyenne;
    float fltNote;
    float fltSomNote;
    do{

        printf("Donnez votre note\n");
        scanf("%f",&fltNote);
        if(fltNote>=0.0){
            fltSomNote+=fltNote;
            nI++;
        }

    }while(fltNote>=0.0);

    fltMoyenne=fltSomNote/nI;

    printf("Moyenne : %f",fltMoyenne);*/


    //Exercice 3
    /*int nNbl,nI,nJ;
    printf("Combien de ligne\n");
    scanf("%d",&nNbl);

    for(nI=0;nI<=nNbl;nI++){
        for(nJ=0;nJ<=nI;nJ++){
            printf("*");

        }
        printf("\n");
    }*/

    //Exercice 4
    /*int nN, nD;
    do{
        printf("donnez un entier superieur a 2\n");
        scanf("%d",&nN);
    }while(nN<=2);

    nD=2;
    while((nN%nD)&&(nD<=sqrt(nN)))
           nD++;

    if(nN%nD)
        printf("%d est premier",nN);
    else
        printf("%d est pas premier",nN);

    */

    //Exercice 5

    /*int nU1,nU2,nU3;//Pour parcourir la suite
    int nN, nI; //rang et compteur

    do{
        printf("rang du terme demande(au moins 3)\n");
        scanf("%d",&nN);
    }while(nN<3);

    nU2=nU1=1;//les 2 premiers termes
    nI=2;
    while(nI++<nN){ //Attention l'algo ne fonctionne que pour n> 2

        nU3=nU1+nU2;
        nU1=nU2;
        nU2=nU3;
    }
    printf("Valeur du terme du rang %d:%d",nN,nU3);*/

    //Exercice 6

    const int NMAX=10;
    int nI,nJ;
    printf("    I");
    for(nJ=1;nJ<=NMAX;nJ++)
        printf("%4d",nJ);

    printf("\n");
    printf("-------");

    for(nJ=1;nJ<=NMAX;nJ++)
        printf("-------");

    printf("\n");

    for(nI=1;nI<=NMAX;nI++){
        printf("%4d",nI);
        for(nJ=1;nJ<=NMAX;nJ++)
            printf("%4d",nI*nJ);

        printf("\n");

    }

    return 0;
}






