#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAILLE 10
#define MOT "HELLO"

//Les entrées sorties conversationnelles


int main()
{

    //Affichage
    printf("%d\n",TAILLE);
    printf("%s\n",MOT);


    //Saisie

    int nVal;
    scanf("%d",&nVal);
    fflush(stdin);//vide le buffer de la saisie
    char cCar;
    scanf("%c",&cCar);
    fflush(stdin);
    char tab_cCar[TAILLE]; //de 0 a TAILLE-1
    scanf("%s",tab_cCar);
    gets(tab_cCar); //ou
    printf("%s",tab_cCar);




    printf("Entrez un caractère\n");
    cCar=getchar();
    while((cCar>='a' && cCar<='z')|| (cCar>='A' && cCar<='Z')){

        printf("%c\n",cCar);
        fflush(stdin);
        cCar=getchar();
    }



    //Saisie avec formatage de l'entrée et la sortie

    float fltReal=123.14921568413;
    int nInteger=0;
    printf("Entrez un reel positif ou negatif sur 2 digits");
    scanf("%2d",&nInteger);
    printf("%2.3f",fltReal);


    return 0;
}






