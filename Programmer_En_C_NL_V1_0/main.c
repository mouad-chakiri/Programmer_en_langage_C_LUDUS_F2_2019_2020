#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAILLE 100
//Les Typedef


typedef struct tPoint{//Signature du typdef

    int nX;
    int nY;
}tPoint;//Declaration du nouveau type


struct tPoint2{//Signature du typdef

    int nX;
    int nY;
}tPoint2,*ptPoint;//Declaration du nouveau type



int main()
{
    tPoint newPoint;
    tPoint *pnewPoint=&newPoint;

    newPoint.nX=0;
    newPoint.nY=0;

    pnewPoint->nX=10;
    pnewPoint->nY=20;

    //Formalisme du pointeur
    (*pnewPoint).nX=50;
    (*pnewPoint).nY=50;


    //Initialisation

    tPoint newPoint2={0,0};


    struct tPoint2 tPoint3={0,0};
    struct ptPoint;

    ptPoint=&tPoint3;

    ptPoint->nX=100;
    ptPoint->nY=100;



   return 0;
}








