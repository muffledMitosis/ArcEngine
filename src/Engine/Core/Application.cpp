#include "Application.h"
#include "Window.h"

#include <X11/X.h>
#include <stdlib.h>
#include <stdio.h>

#include <glad/gl.h>
#include <SDL.h>
#include <SDL_opengl.h>
#include <spdlog/spdlog.h>

#include <iostream>
#include <functional>
#include <chrono>

namespace AE {

	Application::Application()
	{
    this->m_window = new Window();
	}

	Application::~Application()
	{
	}

	void Application::Run()
	{
		std::cout<< "App Started" << std::endl;

    using std::chrono::high_resolution_clock;
    using std::chrono::duration_cast;
    using std::chrono::duration;
    using std::chrono::milliseconds;


    bool exit = false;
    while(!exit)
    {
      auto t1 = high_resolution_clock::now();

      exit = AE::Window::defaultExitConditionCall();
      this->onRender();
      this->m_window->endFrame();

      auto t2 = high_resolution_clock::now();
      std::cout<< "Frame Time:" << duration_cast<milliseconds>(t2 - t1) << std::endl;
    }
	}

} // namespace AE
