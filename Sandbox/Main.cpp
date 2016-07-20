#include "Application.h"
#include "Scene.h"
int main()
{
  
  Application::Core::Application app;
  app.Initialize();
  Application::Core::Scene myscene;
  app.Run(&myscene);
  return 0;//check HEAP
}