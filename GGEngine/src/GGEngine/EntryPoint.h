#pragma once

#ifdef GG_PLATFORM_WINDOWS

extern GGENGINE::Application* GGENGINE::CreateApplication();

int main(int argc, char** argv) {

	printf("GGENGINE initialized");
	auto app = GGENGINE::CreateApplication();
	app->Run();
	delete app;
}

#endif
