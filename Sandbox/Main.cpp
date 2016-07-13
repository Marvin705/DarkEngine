#include "Application.h"
#include "Scene.h"
void main()
{
  Application::Core::Application app;
  app.Initialize();
  Application::Core::Scene myscene;
  app.Run(&myscene);
}