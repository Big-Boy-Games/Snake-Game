#include "Game.h"
#include <iostream>

Game::Game(Window *window) :
	_window(window)
{
	init();



	SDL_Event e;

	while (!_window->isClosed())
	{
		if (SDL_PollEvent(&e))
		{
			switch (e.type)
			{
			case SDL_QUIT:
				_window->close();
				break;
			}
		}
	}
}

Game::~Game()
{
}

void Game::init()
{
}