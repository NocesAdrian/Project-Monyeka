#include <iostream>
#include <SDL2/SDL.h>

// MAIN FUNCTION
int main () {

    // initialized SDL2
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "ERROR INIT: " << SDL_GetError() << std::endl;
        return 1;
    }
    
    // CREATES window
    SDL_Window* window = SDL_CreateWindow("Window Setting Up Example",
                                          SDL_WINDOWPOS_CENTERED,
                                          SDL_WINDOWPOS_CENTERED,
                                          800, 600,
                                          SDL_WINDOW_SHOWN);
    // error handling for making windows
    if (!window) {
        std::cerr << "ERROR CREATING WINDOW" << SDL_GetError() << std::endl;
        return 1;
    }
    
    // Creates renderer
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1,
                                                SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    // MAIN LOOP    
    bool running = true;
    SDL_Event event;
    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) running = false;
            SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
            SDL_RenderClear(renderer);
            
            SDL_Rect rect = {200, 150, 400, 300};
            SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
            SDL_RenderFillRect(renderer, &rect);
            
            SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
            SDL_RenderDrawLine(renderer, 100, 100, 700, 500);

            SDL_RenderPresent(renderer);
        }
    }
    
    // AFTER CARE CLEANUP leftover
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
