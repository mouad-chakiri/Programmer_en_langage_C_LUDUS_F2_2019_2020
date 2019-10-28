#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>


#define TAILLENOM 100
#define TAILLEPRENOM 100
#define TAILLEADRESSE 255
#define TAILLECP 10
#define TAILLEVILLE 100
#define TAILLECONTINUE 100


//Les tableaux


int main()
{

   /* int nTabInteger[TAILLE];
    float fltTabFloat[TAILLE];
    double dblTabDouble[TAILLE];

    char cTabCar[TAILLE];*/


   /* int nI=0;

    for(nI=0;nI<TAILLE;nI++){
            nTabInteger[nI]=0;
            fltTabFloat[nI]=0.0;
            dblTabDouble[nI]=0.0;
            cTabCar[nI]='\0'; // '\0' caractere de fin de la chaine

    }*/

    // TD carte identitite
    static int nID=0;
    char cNom[TAILLENOM];
    char cPrenom[TAILLEPRENOM];
    char cAdresse[TAILLEADRESSE];
    char cCP[TAILLECP];
    char cVille[TAILLEVILLE];



   const char cFinDeSaisie='o';
   char cContinue[TAILLECONTINUE];
   char c='a';


   do{


        printf("Programme Carte identite\n");
        printf("Saisir Nom\n");
        fgets(cNom,TAILLENOM,stdin);
        scanf("%c",&c);
        fflush(stdin);
        printf("Saisir Prenom\n");
        fgets(cPrenom,TAILLEPRENOM,stdin);
        fflush(stdin);
        printf("Saisir Adresse\n");
        fgets(cAdresse,TAILLEADRESSE,stdin);
        fflush(stdin);
        printf("Saisir Cp\n");
        //fgets(cCP,TAILLECP,stdin);
        scanf("%5s",cCP);
        fflush(stdin);
        printf("Saisir Ville\n");
        fgets(cVille,TAILLEVILLE,stdin);
        ++nID;

        //Affichage
        printf("Id : %d\n",nID);
        printf("Nom :%s",cNom);
        printf("Prenom :%s",cPrenom);
        printf("Adresse :%s",cAdresse);
        printf("CP :%s\n",cCP);
        printf("Ville :%s",cVille);

        do{
        printf("Saisir une autre carte o/n ?\n");
        scanf("%s",cContinue);
        fflush(stdin);
        }while(strcmp(cContinue,"o") && strcmp(cContinue,"n"));


    }while(cContinue[0]==cFinDeSaisie);





    return 0;
}






