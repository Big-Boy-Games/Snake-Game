#pragma once

#include "Window.h"

class Game
{
public: 
	Game(Window *window);
	~Game();

	void init();

private:
	Window *_window;
};