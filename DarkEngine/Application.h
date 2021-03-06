//DarkEngine by Marvin Kessler 
#pragma once
#include "Datatypes.h"
#include "IScene.h"
#include <Windows.h>
#include <iostream>
#include "IGraphics2D.h"
#include "Direct2D.h"
#include "GraphicRessourceManager.h"
#include "Input.h"
#include "Direct2DBitmap.h"

namespace Application {

  namespace Core
  {
    class Application
    {
    public:
      Application();
      ~Application();
      void Initialize();
      void Run(IScene* scene);

    private:
      HWND winhandle;
      IGraphics2D* graphics;
      Direct2DBitmap* bmp1;

      //Scene scene;
    };

 
  }
}