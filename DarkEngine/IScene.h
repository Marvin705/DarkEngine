#pragma once
#include "IGraphics2D.h"
namespace Application
{

  namespace Core
  {
    struct IScene
    {
      virtual void  Initialize()=0;
      
      virtual void  Update()=0;
      
      virtual void  Draw(IGraphics2D* graphics)=0;

      virtual void LMouse(int x, int y) = 0;
    };

  }
}