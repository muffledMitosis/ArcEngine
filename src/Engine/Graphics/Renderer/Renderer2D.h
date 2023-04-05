#ifndef RENDERER2D_H
#define RENDERER2D_H
#include "Renderer.h"

#include <glm/vec2.hpp>
#include <glm/vec3.hpp>

namespace AE::Graphics
{

class Renderer2D : public Renderer
{
public:
  Renderer2D();
  ~Renderer2D();

  // Control commands
  void Begin();
  void End();
  
  // Draw commands
  void Rect(const glm::vec2 &pos);
  // void Ellipse(const glm::vec2 &pos, const glm::vec3 &color);

private:
  
};

}

#endif // !RENDERER2D_H
