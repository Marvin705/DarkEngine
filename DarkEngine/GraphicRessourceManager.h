#pragma once
#include <Windows.h>
#include "Direct2D.h"
#include "IGraphics2D.h"
namespace Application
{

  namespace Core
  {
    class GraphicRessourceManager
    {

    public:
      static GraphicRessourceManager* GetInstance()//Singelton
      {
        static GraphicRessourceManager instance;
        return &instance;
      }
      GraphicRessourceManager();
      ~GraphicRessourceManager();
      void* SetRessource(PCWSTR path, IGraphics2D* graphics);
    private:
      int count = 0;
      
    };

  }
}