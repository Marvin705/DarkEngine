#pragma once
#include "IGraphics2D.h"
#include <d2d1.h>
#include <tchar.h>
#include <Windows.h>
#include <dwrite.h>
#pragma comment(lib,"d2d1.lib") //fix it
#pragma comment(lib,"dwrite.lib")

namespace Application
{

  namespace Core
  {
    class Direct2D : public IGraphics2D
    {
    public:
      Direct2D();
      ~Direct2D();

      // Inherited via IGraphics2D
      virtual void Initialize(HWND hwnd) override;
      virtual void BeginDraw() override;
      virtual void EndDraw() override;
      virtual void DrawPixel(int x, int y, int color) override;
      virtual void DrawString(int x, int y, WCHAR* text, int color) override;
      virtual void DrawRectangle(int x, int y,int width, int height, int color, int style) override;
      virtual void Clear(int color) override;

    private:


      ID2D1Factory* factory;
      ID2D1HwndRenderTarget* target;
      ID2D1SolidColorBrush* brush;
      IDWriteTextFormat* textform;
      IDWriteFactory* writefactory;
    };

  }
}