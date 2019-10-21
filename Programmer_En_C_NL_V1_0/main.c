#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NFOIS 5 //constante
#define PI 3.14
#define NOM "Lehmann"
#define CAR 'x'

//Exemple de programme en C

//Commentaires lignes

/* Commentaires paragraphes*/

int main()
{
    //Integer
    short int nA; //short sn
    int nB;
    long int nC; //long ln


    printf("Taille de a : %d\n",sizeof(nA));
    printf("Taille de b : %d\n",sizeof(nB));
    printf("Taille de c : %d\n",sizeof(nC));


    //Real
    float fltReelSimple;
    double dblReelDouble;
    long double ldblReel=10.2580;

     printf("Taille de fltReelSimple : %d\n",sizeof(fltReelSimple));
     printf("Taille de dblReelDouble : %d\n",sizeof(dblReelDouble));
     printf("Taille de ldblReel : %d\n",sizeof(ldblReel));
     printf("Taille de val de ldblReel : %lf\n",(float)ldblReel);



     //caractères

     char cCaractere;
     printf("Taille de cCaractere : %d\n",sizeof(cCaractere));


    //Tester Define
     printf("NFOIS : %d\n",NFOIS);
     printf("PI : %f\n",PI);
     printf("NOM : %s\n",NOM);
     printf("CAR : %c\n",CAR);

     //Opérateurs
     int nI=0;
     ++nI; //pre-incrementation
     nI++; //post-incremenation
     // % modulo
     /*  / division */

     //Cast
     long double ldblLongDouble=105.8933259635;
     printf("Val de ldblLongDouble : %lf",(double)ldblLongDouble);


     //Operateurs relationnels
     // >
     // <
     // >=
     // <=
     // ==
     // !=

     //Operateurs Logiques
     // &
     // &&
     // |
     // ||
     // !


     //Factorisation operateurs
     // +=
     // -=
     // *=
     // /=
     // %= ...

     // nA+=nB  => nA=nA+nB




    return 0;
}






