#include "Application.h"
#include "SDL_surface.h"
#include "SDL_video.h"
#include <SDL.h>

#include <iostream>

namespace AE {

	Application::Application()
	{
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		// while (true);
		std::cout<< "App Executed" << std::endl;

    SDL_Window* window = SDL_CreateWindow("SDL2 Window",
                                          SDL_WINDOWPOS_CENTERED,
                                          SDL_WINDOWPOS_CENTERED,
                                          680, 480,
                                          0);

    if(!window)
      std::cout<<"Failed to create window\n";
    
    SDL_Surface* window_surface = SDL_GetWindowSurface(window);

    if(!window_surface)
      std::cout<<"Failed to get surface from window\n";

    SDL_UpdateWindowSurface(window);
    SDL_Delay(5000);

	}

} // namespace AE
