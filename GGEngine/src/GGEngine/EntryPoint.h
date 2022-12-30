#pragma once

#ifdef GG_PLATFORM_WINDOWS

extern GGENGINE::Application* GGENGINE::CreateApplication();

int main(int argc, char** argv) {

	GGENGINE::Log::Init();

	GG_CORE_INFO("Initialized Logs!");

	auto app = GGENGINE::CreateApplication();
	app->Run();
	delete app;
}

#endif
