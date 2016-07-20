#pragma once
#include <Windows.h>
#include "Direct2D.h"
#include "IGraphics2D.h"
#include "Direct2DBitmap.h"
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
      Direct2DBitmap* SetRessource(PCWSTR path, IGraphics2D* graphics);
    private:
      int count = 0;
      
    };

  }
}