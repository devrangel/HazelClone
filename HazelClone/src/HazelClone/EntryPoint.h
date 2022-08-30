#pragma once

#ifdef HZC_PLATFORM_WINDOWS

extern HazelClone::Application* HazelClone::CreateApplication();

int main(int argc, char** argv)
{
	printf("Hazel Engine\n");
	auto app = HazelClone::CreateApplication();
	app->Run();
	delete app;

	return 0;
}
#endif // HZ_PLATAFORM_WINDOWS

