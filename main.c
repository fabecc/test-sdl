#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include <time.h>

int main(void)
{
    printf("Start\n");
    srand((unsigned int)time(NULL));

    if (SDL_Init(SDL_INIT_VIDEO) != 0 )
    {
        printf("Failed to init SDL: %s\n",SDL_GetError());
        return 1;
    }

    SDL_Window* pWindow = SDL_CreateWindow("My first app",
                                           SDL_WINDOWPOS_UNDEFINED,
                                           SDL_WINDOWPOS_UNDEFINED,
                                           640,
                                           480,
                                           SDL_WINDOW_SHOWN);
    if (pWindow == NULL) {
        printf("Failed to create windows: %s\n", SDL_GetError());
        return 2;
    }

    /* Creating the surface. */
    SDL_Surface* s = SDL_GetWindowSurface(pWindow);

    /* Filling the surface with red color. */
    SDL_FillRect(s, NULL, SDL_MapRGB(s->format, 0, 0, 255));
    SDL_UpdateWindowSurface(pWindow);

    SDL_Event event;	 // used to store any events from the OS
    int running = 1; // used to determine if we're running the game

    while (running)
    {
        // poll for events from SDL
        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
            case SDL_QUIT:
                running = 0;
                break;

            case SDL_MOUSEBUTTONUP:
                SDL_FillRect(s, NULL, SDL_MapRGB(s->format, rand() % 255, rand() % 255, rand() % 255));
                SDL_UpdateWindowSurface(pWindow);
                break;
            }
        }

    }


    SDL_DestroyWindow(pWindow);
    SDL_Quit();

    return 0;
}
