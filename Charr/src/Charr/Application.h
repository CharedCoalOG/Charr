#pragma once

#include "Core.h"

namespace Charr {
	class CHARR_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};
	Application* CreateApplication();
}