#pragma once

#include "Core.h"

namespace GGENGINE {
	class GG_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	Application* CreateApplication();
}
