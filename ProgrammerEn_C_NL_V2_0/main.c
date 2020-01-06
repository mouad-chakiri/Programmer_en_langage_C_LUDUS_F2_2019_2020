#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#define TAILLE 100


//Gestion dynamique de la memoire

void* initTabEntier(int *pnEntier);


int main()
{
     //malloc et free
   //int tab[1000000000]; (tab too large)

   /*int *pTabEntier=(int*)malloc(10000000*sizeof(int));

    int i;
    for(i=0;i<10;i++){
        pTabEntier[i]=0;
    }


   free(pTabEntier);*/



//calloc et realloc


   /* int *pTabEntier=NULL;
    int *pTabEntier2=NULL;

    pTabEntier=(int*)calloc(10,sizeof(int));

    pTabEntier2=(int*)realloc(pTabEntier,100*sizeof(int));


    int i;
    for(i=0;i<100;i++){
        pTabEntier2[i]=5;
    }

    free(pTabEntier2);*/



    int *pTabEntier=(int*)calloc(1,sizeof(int));

    int *pTabEntier2=initTabEntier(pTabEntier);


    int i;
    for(i=0;i<10;i++){
        pTabEntier2[i]=5;
        printf("%d\n",pTabEntier2[i]);
    }
    free(pTabEntier);
    free(pTabEntier2);





   return 0;
}


void* initTabEntier(int *pnEntier){


    pnEntier=(int*)realloc(pnEntier,10*sizeof(int));

    return (void*)pnEntier;


}


