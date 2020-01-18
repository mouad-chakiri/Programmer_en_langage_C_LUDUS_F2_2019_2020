#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define TAILLE 100






//Pointeurs genriques
void raz(void *adr,int n);


//Pointeurs sur des fonctions
void (*adf)(double,int);
void fct1(double,int);

//Pointeurs sur des fonction transmises en argument
int fct2(void(*adf)(double,int));

//Méthode staique en ligne
static inline void echange(int *nVal1, int *nVal2);


int main()
{


    //Utilisation pointeurs generiques
    double z;
    raz(&z,sizeof(z));

    printf("%lf",z);

    int tab[10];

    raz(tab,10*sizeof(int));



    //Pointeurs sur des fonctions
	adf=fct1;  //Avec ou Sans & si pas & il assigne la ref automatiquement

    (*adf)(2.3,10);


  //Pointeurs sur des fonction transmises en argument
    fct2(fct1);

    //Méthode staique en ligne
    int nN1=10;
    int nN2=20;
    echange(&nN1,&nN2);


   return 0;
}




//Pointeurs Génériques

void raz(void *adr,int n){
    int i;
    char *ad=adr;
    for(i=0;i<n;i++,ad++)
        *ad=0;

}


//Pointeurs sur des fonctions
void fct1(double a,int b){

    printf("%lf,%d\n",a,b);

}

//Pointeurs sur des fonctions transmises en argument
int fct2(void(*adf)(double,int)){

    (*adf)(2.3,10);

    return 0;
}

//Méthode staique en ligne
static inline void echange(int *nVal1, int *nVal2){

    int nTemp;

    nTemp=*nVal1;
    *nVal1=*nVal2;
    *nVal2=nTemp;

}
