#include "Direct2D.h"

namespace Application
{

  namespace Core
  {
    bool Failed(HRESULT aResult)
    {
      if (FAILED(aResult))
      {
        LPTSTR buffer;
        FormatMessage(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM, nullptr, (DWORD)aResult, LANG_USER_DEFAULT, (LPTSTR)&buffer, 0, nullptr);

        MessageBox(0, buffer, _T("Fatal error"), MB_OK | MB_ICONERROR);
        LocalFree(buffer);
        return true;
      }
      return false;
    }

    Direct2D::Direct2D()
    {
    }


    Direct2D::~Direct2D()
    {
      brush->Release();
      target->Release();
      factory->Release();
      textform->Release();
      writefactory->Release();
    }


    void Direct2D::Initialize(HWND hwnd)
    {
      HRESULT hr;
      this->factory = NULL;
      hr = D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &factory);

      Failed(hr);

      RECT rc;

      GetClientRect(hwnd, &rc);

      this->target = NULL;
      hr = factory->CreateHwndRenderTarget(
        D2D1::RenderTargetProperties(),
        D2D1::HwndRenderTargetProperties(hwnd,
          D2D1::SizeU(
            rc.right - rc.left,
            rc.bottom - rc.top)
          ),
        &target
        );
      Failed(hr);


      this->brush = NULL;
      hr = target->CreateSolidColorBrush(D2D1::ColorF(D2D1::ColorF::Red), &this->brush);
      Failed(hr);



      //text
      hr = DWriteCreateFactory(
        DWRITE_FACTORY_TYPE_SHARED,
        __uuidof(IDWriteFactory),
        reinterpret_cast<IUnknown**>(&writefactory)
        );
      Failed(hr);

      hr = writefactory->CreateTextFormat(
        L"Consolas",
        NULL,
        DWRITE_FONT_WEIGHT_REGULAR,
        DWRITE_FONT_STYLE_NORMAL,
        DWRITE_FONT_STRETCH_NORMAL,
        22.0f,
        L"en-us",
        &textform
        );
      Failed(hr);


    }
    void Direct2D::BeginDraw()
    {
      target->BeginDraw();
      this->Clear(0x000000);
    }
    void Direct2D::EndDraw()
    {
      target->EndDraw();
    }
    void Direct2D::DrawPixel(int x, int y, int color)
    {
      //TODO
    }
    void Direct2D::DrawString(int x, int y, WCHAR* text,int color)
    {
      brush->SetColor(D2D1::ColorF(color));
      
      D2D1_SIZE_F renderTargetSize = target->GetSize(); 
       target->DrawText(text,
        wcslen(text),
        textform,
        D2D1::RectF(x, y,renderTargetSize.width, renderTargetSize.height),
        brush);
      //TODO
     // target->DrawTextA(text,)

    }
    void Direct2D::DrawRectangle(int x, int y, int width, int height, int color, int style)
    {
      brush->SetColor(D2D1::ColorF(color));
      if (style == 0)
      {
        target->DrawRectangle(D2D1::RectF(
          x,
          y,
          x + width,
          y + height),
          brush);
      }
      if (style == 1)
      {
        target->FillRectangle(D2D1::RectF(
          x,
          y,
          x + width,
          y + height),
          brush);
      }

    }
    void Direct2D::Clear(int color)
    {
      target->Clear(D2D1::ColorF(color));
    }
  }
}