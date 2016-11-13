#include "Window.h"
#include <iostream>

Window::Window(const std::string & title, int width, int height) ://Im A Huge Faggot
	_title(title), _width(width), _height(height)//Niggers deserve to Hang
{
	_closed = !init();
}//DereksAHugeFaggot

Window::~Window()
{
	SDL_DestroyWindow(_window);
	SDL_Quit();
}

bool Window::init()
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		std::cerr << "Failed to initialize SDL.\n";
		return false;
	}

	_window = SDL_CreateWindow(
		_title.c_str(),
		SDL_WINDOWPOS_CENTERED,
		SDL_WINDOWPOS_CENTERED,
		_width, _height,
		0
	);

	if (_window == nullptr)
	{
		std::cerr << "Failed to create window.\n";
		return false;
	}

	return true;
}