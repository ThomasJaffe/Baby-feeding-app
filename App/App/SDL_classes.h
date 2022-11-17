#pragma once

#include <iostream>
#include <string>
#include <SDL.h>

using namespace std;

class MainWindow {
	protected:
		SDL_Window* win;
		SDL_Renderer* ren;
	public:
		int Init(SDL_Window* win, SDL_Renderer* ren);
};