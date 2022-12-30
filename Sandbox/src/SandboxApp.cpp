#include <GGEngine.h>

class Sandbox : public GGENGINE::Application {
public:
	Sandbox() {

	}
	~Sandbox() {

	}
};

GGENGINE::Application* GGENGINE::CreateApplication() {
	return new Sandbox();
}