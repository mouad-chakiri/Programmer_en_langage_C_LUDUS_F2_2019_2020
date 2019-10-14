#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NFOIS 5

//Exemple de programme en C



int main()
{
    int i;
    float x;
    float racx;


    printf("Bonjour\n");


    printf("Je vais vous calculer %d racines carrees\n",NFOIS);

    for(i=0;i<NFOIS;i++){
        printf("Donnez un nombre : ");
        scanf("%f",&x);
        if(x<0.0)
            printf("Le nombre %f ne possède pas de racine carree\n",x);
        else{
            racx=sqrtf(x);
            printf("le nombre %f a pour racine carree : %f\n",x,racx);
        }
    }

    printf("Travail Termine - Au revoir");


    return 0;
}
