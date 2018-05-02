#include <iostream>

using namespace std;

#include <SDL2/SDL.h>

int main(int argc,char* argv[])
{
    SDL_Init(SDL_INIT_EVERYTHING);

    cout << "Hello world!" << endl;

    SDL_Quit();
}
