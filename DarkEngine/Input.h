#pragma once
namespace Application
{

  namespace Core
  {
    class Input
    {
    public:
      Input();
      ~Input();
      static Input* GetInstance()//Singelton
      {
        static Input instance;
        return &instance;
      }
      bool GetKeyDown(int keycode);
      bool GetKeyUp(int keycode);
      bool GetKeyDownC(int keyCode); //C = ONCE only on chage state
      bool GetKeyUpC(int keyCode); //C =ONCE only on chage state
      void Step();
      void UpdateKey(int keyCode,bool state);
      bool* Keybord;
      bool* Keybordlasttick;
    };

  }
}