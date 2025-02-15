#include <SDL3/SDL.h>
#include <SDL3/SDL_events.h>
#include <SDL3/SDL_main.h>
#include <SDL3/SDL_init.h>
#include <SDL3/SDL_oldnames.h>
#include <SDL3/SDL_render.h>
#include <SDL3/SDL_surface.h>
#include <SDL3/SDL_video.h>
#include <SDL3_ttf/SDL_ttf.h>





const int Width = 800;
const int Height = 600;



int main(int argc, char *argv[]) {
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;
    SDL_Event event;

    int result = SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS);
    if (result < 0) {
        SDL_Log("SDL_Init error: %s\n", SDL_GetError());
        return -1;
    }

    window = SDL_CreateWindow("SDL test", Width, Height, 0);

    if (window == NULL) {
        SDL_Log("SDL_CreateWindow error: %s\n", SDL_GetError());
        return -2;
    }

    renderer = SDL_CreateRenderer(window, NULL);
    if (renderer == NULL) {
        SDL_Log("SDL_CreateRenderer error: %s\n", SDL_GetError());
        return -2;
    }

    SDL_Log("SDL3 initialized");

    int quit = 0;
    while(!quit) {
        while(SDL_PollEvent(&event)) {
            switch (event.type) {
                case SDL_EVENT_QUIT:
                    SDL_Log("SDL3 event: quit");
                    quit = 1;
                    break;
                case SDL_EVENT_KEY_DOWN:
                    if (event.key.key == SDLK_ESCAPE) {
                        SDL_Log("SDL3 event: esc quit");
                        quit = 1;
                        break;
                    }
            }
        }

        SDL_SetRenderDrawColor(renderer, 0, 0, 0xff, 0xff);
        SDL_RenderClear(renderer);
        // TEXT render
        SDL_Color color;
        TTF_Init();
        TTF_Font *font = TTF_OpenFont("/usr/share/fonts/liberation/LiberationMono-Regular.ttf", 20);
        SDL_Surface *textSurface = TTF_RenderText_Blended(font, "shit text here", 14 , color);

        SDL_Texture *textTexture = SDL_CreateTextureFromSurface(renderer, textSurface);
        SDL_RenderTexture(renderer, textTexture, NULL, NULL);

        SDL_DestroySurface(textSurface);
        SDL_DestroyTexture(textTexture);
        TTF_CloseFont(font);
        TTF_Quit();
        // End TEXT block

        SDL_RenderPresent(renderer);

        SDL_Delay(1);
    }




    SDL_Log("SDL3 initialized");
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);


    return 0;
}
