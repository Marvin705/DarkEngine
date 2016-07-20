#pragma once
#include<d2d1.h>
#include <wincodec.h>
#pragma comment(lib,"Windowscodecs.lib")//fix later
namespace Application
{

  namespace Core
  {
    class BitmapDecoder
    {
    public:
      BitmapDecoder();
      ~BitmapDecoder();
      HRESULT LoadBitmapFromFile(
        ID2D1RenderTarget *pRenderTarget,
        PCWSTR uri,
        ID2D1Bitmap **ppBitmap
      );
    };
   
  }
}