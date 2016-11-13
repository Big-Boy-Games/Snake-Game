#pragma once

#include <string>
#include <SDL.h>

class Window
{
public:
	Window(const std::string &title, int width, int height);
	~Window();

	inline bool isClosed() const { return _closed; }

	inline void close() { _closed = true; }

private:
	bool init();

	std::string _title;
	int _width;
	int _height;

	bool _closed = false;

	SDL_Window *_window = nullptr;
};