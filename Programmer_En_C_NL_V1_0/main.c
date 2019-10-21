#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAILLE 10

//Strcutures Conditions et boucles



int main()
{

    int a=0,b=0,c=0, d=0;

    //Condition

    if(a==b){
        printf("Ils sont egaux\n");
    }else{
        printf("Ils sont diff\n");
    }

    //Condition avec operateurs logiques

    if((a==b) && (a==c)){
        printf("Ils sont tous egaux\n");

    }else{
        printf("Ils sont différents\n");
    }


    if((a==b) || (a==c)){
        printf("Ils sont egaux\n");
    }else{
        printf("Ils sont diff\n");
    }

    if((a==b) || (a==c)){
        printf("Ils sont egaux\n");
    }else if((a==c)&& (a!=d)){
        printf("blabla...\n");
    }


    //Boucle
    int i=0;

    for(i=0;i<TAILLE;i++){

        printf("Hello world\n");
    }

    //TQ

    i=0;
    while(i<TAILLE){

         printf("Hello world\n");
         i++;

    }

    //Faire TQ

    i=0;
    do{
        printf("Hello world\n");
        i++;
    }while(i<TAILLE);


    //Cas alternatif de la condition

    int choix=-1;

    printf("Veuillez entrer votre choix\n");
    scanf("%d",&choix);
    switch(choix){
            case 0:printf("Quitter\n");break;
            case 1:printf("calculer\n");break;
            case 2:printf("Jouer\n");break;
            default : printf("default\n");break;

    }

    //test ? instruction1 : instruction 2
    a==b? printf("Egaux"): printf("Diff");


    //Instruction break;
    for(i=0;i<TAILLE;i++){
        printf("Hello world\n");

        if(i==3){
            break;
        }
    }

  //Instruction continue;
    for(i=0;i<TAILLE;i++){
        printf("Hello world\n");

        if(i<3){
            printf("continue\n");
            continue;

        }
    }



    return 0;
}






