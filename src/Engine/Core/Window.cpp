#include "Window.h"

namespace AE 
{
  Window::Window(unsigned int width, unsigned int height)
  {
    this->width = width;
    this->height = height;

    SDL_Init(SDL_INIT_VIDEO);

    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);

    this->sdl_window = SDL_CreateWindow(
        "[glad] GL with SDL",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        this->width, this->height,
        SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN
    );


    this->glCtx = SDL_GL_CreateContext(this->sdl_window);
    this->glVersion = gladLoadGL((GLADloadfunc) SDL_GL_GetProcAddress);

  }

  // TODO: Remove delay
  void Window::endFrame()
  {
    glClear(GL_COLOR_BUFFER_BIT);
    SDL_GL_SwapWindow(this->sdl_window);
    // SDL_Delay(1);
  }

  Window::~Window()
  {
    SDL_GL_DeleteContext(this->glCtx);
    SDL_DestroyWindow(this->sdl_window);
    SDL_Quit();
  }
}
