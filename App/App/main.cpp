#include <iostream>
#include <string>
#include <SDL.h>
#include "Biberon.h"
#include "SDL_classes.h"
#undef main

using namespace std;

int main() {
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		cout << "Erreur lors de l'initialisation de la SDL : " << SDL_GetError() << endl;
		SDL_Quit();
	}
	


	SDL_Event e;
	bool quit = false;

	while (!quit) {
		while (SDL_PollEvent(&e)) {
			if (e.type == SDL_QUIT) {
				quit = true;
			};
		};

		SDL_Rect rect_1{};
		rect_1.x = 0;
		rect_1.y = 0;
		rect_1.h = 50;
		rect_1.w = 1000;

		SDL_Rect rect_2{};
		rect_2.x = 0;
		rect_2.y = 50;
		rect_2.h = 750;
		rect_2.w = 10;

		SDL_Rect rect_3{};
		rect_3.x = 990;
		rect_3.y = 50;
		rect_3.h = 750;
		rect_3.w = 10;

		SDL_SetRenderDrawColor(ren, 200, 200, 200, 255);

		SDL_RenderClear(ren);

		SDL_SetRenderDrawColor(ren, 255, 215, 0, 255);

		SDL_RenderDrawRect(ren, &rect_1);

		SDL_RenderFillRect(ren, &rect_1);

		SDL_SetRenderDrawColor(ren, 255, 0, 0, 255);

		SDL_RenderDrawRect(ren, &rect_2);

		SDL_RenderFillRect(ren, &rect_2);

		SDL_RenderDrawRect(ren, &rect_3);

		SDL_RenderFillRect(ren, &rect_3);

		SDL_RenderPresent(ren);
		
	};

	return 0;
}