#ifndef APPLICATION_H
#define APPLICATION_H

#include "Window.h"
#include "../Graphics/Renderer/Renderer2D.h"
#include <functional>

#define R2D GetRenderer2D()

namespace AE {

  // I have made the decision that all applications will have a window
	class Application
	{
  private:
    AE::Window *m_window;
    AE::Graphics::Renderer2D *m_renderer_2d;
	public:
		Application();
		virtual ~Application() = 0;

		virtual void onRender() = 0;
    void Run();

    Graphics::Renderer2D* GetRenderer2D();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

} // namespace AE

#endif
