#include <SDL.h>
#undef main

#include "Window.h"
#include "Game.h"
#include <iostream>

int main(int argc, int **argv)
{
	Window window("Pong", 800, 600);

	Game game(&window);
	return 0;
}