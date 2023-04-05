#include "Renderer.h"

#include <glad/gl.h>
#include <SDL.h>
#include <SDL_opengl.h>

namespace AE::Graphics
{

Renderer::Renderer()
{
}

Renderer::~Renderer()
{
}

// Initialize graphics
void Renderer::Init()
{
  glClearColor(0.7f, 0.9f, 0.1f, 1.0f);
}

}

