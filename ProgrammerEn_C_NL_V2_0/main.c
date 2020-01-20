#include<stdio.h>
#include"SDL2_Display.h"

int main(int argc, char *argv[]){

    int i;
    for(i=0; i<argc;i++){
        printf("%s\n",argv[i]);

    }

    pWindow=NULL;
    pRenderer=NULL;
    ptexture=NULL;
    psurface=NULL;


     //initialize SDL

    if(SDL_Init(SDL_INIT_EVERYTHING)>=0)
    {
            //if succeeded create our window
            pWindow=SDL_CreateWindow("SDL_Application",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,1024,780,SDL_WINDOW_SHOWN);
            //if succeeded create window, create our render
            if(pWindow!=NULL){
                pRenderer=SDL_CreateRenderer(pWindow,-1,SDL_RENDERER_PRESENTVSYNC);


            }


    }else{


        return 0;
    }

    SDL_Delay(10000);

return 0;
}
