#pragma once //Test
#include "Direct2D.h"
//#include <d2d1.h>
namespace Application {

  namespace Core
  {
    class Direct2DBitmap
    {
    public:
      Direct2DBitmap();
      ~Direct2DBitmap();
      void Freedata();
      void SetData(PCWSTR path, IGraphics2D* graphics);
      ID2D1Bitmap* DataAcess();
    private:
      ID2D1Bitmap* data;
    };

  }
}