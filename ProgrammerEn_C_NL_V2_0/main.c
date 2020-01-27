#include<stdio.h>
#include "SDL2/SDL.h"

int main(int argc, char *argv[]){



     SDL_Window *pWindow=NULL;//Pointeur typedef SDL_Window possede la reference d'un window(Win32)
     SDL_Renderer *pRenderer=NULL;//Pointeur typedef SDL_Renderer possede la reference du rendu encapsule dans Window
     SDL_Texture *pTexture=NULL;//Pointeur typdef SDL_Texture possede la reference l'objet image,materiel ou texture qui sera blite dans le renderer(Rendu)


    //initialisation de SDL
    if(SDL_Init(SDL_INIT_EVERYTHING)>=0)
    {
            //Creer le pointeur sur la reference de la fenetre Win32
            pWindow=SDL_CreateWindow("SDL_Application",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,1024,780
                                     ,SDL_WINDOW_SHOWN);
            //Si la fenetre creee
            if(pWindow!=NULL){
                //Creation du rendu encapsule dans la fenetre pointee par pWindow
                pRenderer=SDL_CreateRenderer(pWindow,-1,SDL_RENDERER_ACCELERATED|SDL_RENDERER_PRESENTVSYNC);

            }

        //Traitement
        SDL_SetRenderDrawColor(pRenderer, 0, 0, 0, SDL_ALPHA_OPAQUE);
        SDL_RenderPresent(pRenderer);
        //

        //Synchronisation et rafraichissement d'affichage des frames à l'ecran
        SDL_Delay(2000);

        //Set de la couleur du traitement
        SDL_SetRenderDrawColor(pRenderer, 255, 0, 0, SDL_ALPHA_OPAQUE);
        //Effecement de l'etat precedent du renderer
        SDL_RenderClear(pRenderer);
        //Affiche l'etat du nouveau rendu
        SDL_RenderPresent(pRenderer);


        //Attente et fin du programme
        SDL_Delay(10000);

        //suppression et nettoyage des instances
        SDL_DestroyRenderer(pRenderer);
        SDL_DestroyWindow(pWindow);
        SDL_Quit();




    }else{


        return 0;
    }




return 0;
}



