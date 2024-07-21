#include <SDL3/SDL.h>
#include <iostream>

int main(int argc, char** argv){
    if (SDL_Init(SDL_INIT_VIDEO) < 0){
        std::cout << "Error initializing video submodule. Error code: " << SDL_GetError();
        return 1;
    };
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;
    int error = 0;

    window = SDL_CreateWindow(
                        "Sos tatarski the game", // window name
                        800, // width
                        600, // height
                        SDL_WINDOW_RESIZABLE & SDL_WINDOW_MOUSE_FOCUS // flags OR'd together
                        );
    if(!window) { 
        std::cout << "Failed when creating the window. Error code: " << SDL_GetError();
        return 1;
        }
    
    renderer = SDL_CreateRenderer(
                                window, 
                                NULL // renderer properties
                                );
    if(!renderer) { 
        std::cout << "Failed when creating the renderer. Error code: " << SDL_GetError();
        return 1;
        }
    
    
    return 0;
}