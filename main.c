#include <stdio.h>
#include <SDL.h>

int main(void)
{
    printf("Start\n");

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

    SDL_Delay(3000);

    SDL_DestroyWindow(pWindow);
    SDL_Quit();

    return 0;
}
