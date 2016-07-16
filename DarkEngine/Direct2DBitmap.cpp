#include "Direct2DBitmap.h"

namespace Application {

  namespace Core
  {

    Direct2DBitmap::Direct2DBitmap()
    {
    }


    Direct2DBitmap::~Direct2DBitmap()
    {
    }
    void Direct2DBitmap::Freedata()
    {
      this->data->Release();
    }
    void Direct2DBitmap::SetData(PCWSTR path, IGraphics2D * graphics)
    {
      this->data = (reinterpret_cast <Direct2D*> (graphics))->Decode(path);
    }
    ID2D1Bitmap * Direct2DBitmap::DataAcess()
    {
      return this->data;
    }
  }
}