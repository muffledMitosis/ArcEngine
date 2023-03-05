#pragma once

namespace AE {

	class Application
	{
	public:
		Application();
		virtual ~Application() = 0;

		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();

} // namespace AE