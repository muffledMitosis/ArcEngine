#pragma once

#include "Window.h"
extern AE::Application* AE::CreateApplication();

int main()
{
	auto app = AE::CreateApplication();
	app->Run();
	return 0;
}
