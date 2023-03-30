#ifndef APPLICATION_H
#define APPLICATION_H

#include "Window.h"
#include <functional>

namespace AE {

  // I have made the decision that all applications will have a window
	class Application
	{
  private:
    AE::Window *m_window;
	public:
		Application();
		virtual ~Application() = 0;

		virtual void onRender() = 0;
    void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

} // namespace AE

#endif
