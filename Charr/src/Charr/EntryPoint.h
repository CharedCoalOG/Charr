#pragma once

#ifdef CR_PLATFORM_WINDOWS

extern Charr::Application* Charr::CreateApplication();

int main(int argc, char** argv)
{
	printf("Charr Engine is WIP!\n");
	auto app = Charr::CreateApplication();
	app->Run();
	delete app;
}

#endif