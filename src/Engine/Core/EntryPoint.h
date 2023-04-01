#pragma once

#include "Log.h"
extern AE::Application* AE::CreateApplication();

int main()
{
  AE::Logger::Init();

	auto app = AE::CreateApplication();
	app->Run();
	return 0;
}
