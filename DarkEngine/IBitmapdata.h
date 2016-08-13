#pragma once
#include <d2d1.h>
namespace Application {

  namespace Core
  {
    struct IBitmapdata
    {
      virtual ID2D1Bitmap* DataAcess()=0;
    };