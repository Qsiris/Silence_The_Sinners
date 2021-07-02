#include <iostream>
#include "SDL.h"
#include "Main_Game_Logic.hpp"

const int MONITOR_HIGHT = 1226;
const int MONITOR_WIDTH = 689;

struct GlobalData
{
	SDL_Window* window;
	SDL_Surface* surface;
	SDL_Surface* windowSurface;
};

void startGame()
{
	struct GlobalData GlobalData;
	GlobalData.window = SDL_CreateWindow
	("Silence The Sinners", SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED, MONITOR_HIGHT, MONITOR_WIDTH, SDL_WINDOW_SHOWN);
	//we get the surface of the window for the following manipulations with pictures
	GlobalData.windowSurface = SDL_GetWindowSurface(GlobalData.window);
	SDL_Delay(1000);
}