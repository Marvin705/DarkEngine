#include "Application.h"

namespace Application {

  namespace Core
  {
    Application::Application()
    {
    }

    Application::~Application()
    {
      delete graphics;
    }
    LRESULT CALLBACK WndProc(HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
    {
      if (message == WM_DESTROY)
      {
        PostQuitMessage(0);
      }
      return DefWindowProc(hwnd, message, wParam, lParam);
    }


    void Application::Initialize()
    {
     
      LPCSTR classname = "DarkEngine";

      WNDCLASS  wndclass = {};
      wndclass.style = CS_VREDRAW | CS_HREDRAW;
      wndclass.hInstance = GetModuleHandle(0);
      wndclass.hIcon = LoadIcon(NULL, IDI_APPLICATION);
      wndclass.hCursor = LoadCursor(NULL, IDC_ARROW);
      wndclass.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
      wndclass.lpszMenuName = NULL;
      wndclass.lpszClassName = classname;
      wndclass.lpfnWndProc = WndProc;

      if (!RegisterClass(&wndclass))
      {
        printf("Criticall Error!");
      }
      RECT rc;
      rc.top = 0;
      rc.left = 0;
      rc.right = 1280;
      rc.bottom = 720;
      
      AdjustWindowRect(&rc, WS_OVERLAPPEDWINDOW, false);

      winhandle = CreateWindow(classname,
        "DarkEngine",
        WS_OVERLAPPEDWINDOW | WS_VISIBLE,
        CW_USEDEFAULT,
        CW_USEDEFAULT,
        rc.right-rc.left,
        rc.bottom-rc.top,
        NULL,
        NULL,
        wndclass.hInstance,
        NULL);

      ShowWindow(this->winhandle, SW_SHOW);

      //test
      graphics = new Direct2D();
      graphics->Initialize(winhandle);
      bmp1 = GraphicRessourceManager::GetInstance()->SetRessource(L"D:\\Ghost1.bmp", graphics);


      //test

      printf("App Initialize sucsess \n");
    }
    void Application::Run(IScene* scene)
    {
      scene->Initialize();
      printf("App Run sucsess \n");
      MSG message = {};
      bool quit = false;
      while (!quit)
      {
        //printf("App is running ... \n");
        PeekMessage(&message, NULL, 0, 0, PM_REMOVE);
        if (message.message == WM_QUIT)
        {
          quit = true;
        }
        if (message.message == WM_LBUTTONDOWN)
        {
          POINTS point = MAKEPOINTS(message.lParam);
          scene->LMouse(point.x, point.y);
        }
        TranslateMessage(&message);
        DispatchMessage(&message);
        //Input
        Input::GetInstance()->Step();
        for (int i = 0; i < 256; i++)
        {
          Input::GetInstance()->UpdateKey(i, GetAsyncKeyState(i) !=0 );
        }
        //update
        scene->Update();   //scene->Update(Input);

        //Draw
        graphics->BeginDraw();
        scene->Draw(graphics);
       /* if (!quit)
        {
        
          graphics->DrawBitmap(L"D:\\Ghost1.bmp");
        }*/
        
        graphics->DrawString(0, 0, L"Test0",0xFF0000);
        graphics->DrawString(223, 5, L"Test1", 0xFF00FF);
        graphics->DrawString(22, 123, L"Test2", 0xFFFF00);
        graphics->DrawString(213, 51, L"Test3", 0x00FF00);
        graphics->DrawString(224, 111, L"Test4", 0x00FFFF);
        graphics->DrawString(234, 145, L"Test5", 0xFFFFFF);
        graphics->DrawBitmap(bmp1);
        graphics->EndDraw();
        
        //Test

        //
      }
     
      graphics->Shutdown();
      printf("App Shutdown! sucsess \n");
    }
  }
}