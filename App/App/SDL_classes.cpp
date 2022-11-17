#include <iostream>
#include <string>
#include <SDL.h>
#include "SDL_classes.h"
#undef main

using namespace std;

int MainWindow::Init(SDL_Window* win, SDL_Renderer* ren) {
	SDL_Window* win = SDL_CreateWindow("Gestionnaire de biberon", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1000, 800, SDL_WINDOW_SHOWN);
	if (win == nullptr) {
		cout << "Erreur lors de SDL_CreateWindow : " << SDL_GetError() << endl;
		SDL_Quit();
		return 1;
	};

	SDL_Renderer* ren = SDL_CreateRenderer(win, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (ren == nullptr) {
		SDL_DestroyWindow(win);
		cout << "Erreur lors de SDL_CreateRenderer : " << SDL_GetError() << endl;
		SDL_Quit();
		return 1;
	};
};