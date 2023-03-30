#include "Application.h"

#include <stdlib.h>
#include <stdio.h>

#include <glad/gl.h>
#include <SDL.h>
#include <SDL_opengl.h>

#include <iostream>
#include <functional>

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

	}

} // namespace AE
