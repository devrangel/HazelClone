#include "HazelClone.h"

class SandboxApp : public HazelClone::Application
{
public:
	SandboxApp()
	{

	}
	~SandboxApp()
	{

	}

private:

};

HazelClone::Application* HazelClone::CreateApplication()
{
	return new SandboxApp();
}
