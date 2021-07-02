#include <iostream>
#include "Main_Game_Logic.hpp"
#include "SDL.h"
using namespace std;

int main(int argc, char** argv)
{
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	{
		cout << "SDL can't start. Error: " << SDL_GetError() << endl;
	}
	else
	{
		startGame();
	}
	return 0;
}