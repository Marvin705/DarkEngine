#pragma once
#include <Windows.h>
namespace Application
{

  namespace Core
  {
    struct IGraphics2D
    {
      virtual void Initialize(HWND hwnd) = 0;
      virtual void BeginDraw() = 0;
      virtual void EndDraw() = 0;
      virtual void Clear(int color) = 0;
      virtual void DrawPixel(int x, int y, int color) = 0;
      virtual void DrawString(int x, int y, WCHAR* text, int color)= 0;
      virtual void DrawRectangle(int x, int y,int width, int height, int color, int style) = 0;
      virtual void DrawBitmap(PCWSTR path) = 0;
      virtual void Shutdown() = 0;
      virtual void DrawBitmap(void* bitmap) = 0;
    };
  }
}