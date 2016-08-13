#pragma once
#include "Direct2DBitmap.h"
#include "Direct2D.h"
namespace Application {

  namespace Core
  {
    struct IData
    {
      virtual ID2D1Bitmap* DataAcess()=0;
    };
  }
}