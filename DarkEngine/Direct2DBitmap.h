#pragma once //Test
#include "Direct2D.h"
#include "IData.h"
#include <d2d1.h>
namespace Application {

  namespace Core
  {
    class Direct2DBitmap :public IData
    {
    public:
      Direct2DBitmap();
      ~Direct2DBitmap();
      void Freedata();
      void SetData(PCWSTR path, Direct2D* graphics);
      virtual ID2D1Bitmap* DataAcess() override;
    private:
      ID2D1Bitmap* data;
    };

  }
}