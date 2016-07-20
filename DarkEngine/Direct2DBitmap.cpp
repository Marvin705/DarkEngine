#include "Direct2DBitmap.h"//test

namespace Application {

  namespace Core
  {

    Direct2DBitmap::Direct2DBitmap()
    {
    }


    Direct2DBitmap::~Direct2DBitmap()
    {
      if(this->data != nullptr)
      {
      
      }
      
    }
    void Direct2DBitmap::Freedata()
    {
      this->data->Release();
      this->data = nullptr;
      delete this;
      //this->data->Release();
    }
    void Direct2DBitmap::SetData(PCWSTR path, Direct2D* graphics)
    {
      this->data = graphics->Decode(path);
      
    }
    ID2D1Bitmap * Direct2DBitmap::DataAcess()
    {
      return this->data;
    }
  }
}