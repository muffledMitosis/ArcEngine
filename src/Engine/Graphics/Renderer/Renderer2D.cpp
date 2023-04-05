#include "Renderer2D.h"

#define DEBUG
#include "../../Core/Log.h"

namespace AE::Graphics
{
Renderer2D::Renderer2D()
{
}

Renderer2D::~Renderer2D()
{
}


void Renderer2D::Begin() {}
void Renderer2D::End() {}

void Renderer2D::Rect(const glm::vec2 &pos)
{
  AE_CORE_INFO("Render Rect");
}

}
