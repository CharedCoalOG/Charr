#include <Charr.h>

class Sandbox : public Charr::Application
{
public:
	Sandbox()
	{
	}
	~Sandbox()
	{
	}
};

Charr::Application* Charr::CreateApplication()
{
	return new Sandbox();
}