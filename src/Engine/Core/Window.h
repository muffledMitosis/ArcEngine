#ifndef WINDOW_H
#define WINDOW_H

#include <glad/gl.h>
#include <SDL.h>
#include <SDL_opengl.h>

#include <functional>

namespace AE
{

class Window 
{
private:
  SDL_Window* sdl_window;
  SDL_GLContext glCtx;
  int glVersion;

  unsigned int width, height;

public:

  static bool defaultExitConditionCall()
  {
    SDL_Event event;

    while(SDL_PollEvent(&event))
    {
      switch (event.type) 
      {
        case SDL_QUIT:
          return true;
        case SDL_KEYUP:
          if(event.key.keysym.sym == SDLK_ESCAPE)
          {
            return true;
          }
        default:
          return false;
      }
    }

    return false;
  }
  std::function<void()> loop;

  Window(unsigned int width=800, unsigned int height=600);
  void endFrame();
  ~Window();

};

}

#endif
