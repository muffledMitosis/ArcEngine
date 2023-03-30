#pragma once

extern AE::Application* AE::CreateApplication();

int main()
{
	auto app = AE::CreateApplication();
	app->Run();
	return 0;
}
