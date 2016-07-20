#include "Input.h"
#include <iostream>

namespace Application
{

  namespace Core
  {

    Input::Input()
    {
      Keybord = new bool[256]{};
      Keybordlasttick = new bool[256]{};
    }


    Input::~Input()
    {
      delete[] Keybord;
      delete[] Keybordlasttick;
    }
    bool Input::GetKeyDown(int keycode)
    {
      return Keybord[keycode];
    }
    bool Input::GetKeyUp(int keycode)
    {
      return !GetKeyDown(keycode);
    }
    bool Input::GetKeyDownC(int keyCode)
    {
      if (GetKeyDown(keyCode) && (Keybordlasttick[keyCode] != GetKeyDown(keyCode)))
      {
        return true;
      }
      return false;
    }
    bool Input::GetKeyUpC(int keyCode)
    {
      if (GetKeyUp(keyCode) && (Keybordlasttick[keyCode] ))
      {
        return true;
      }
      return false;
    }
    void Input::Step()
    {
      delete[] Keybordlasttick;
      Keybordlasttick = Keybord;
      Keybord = new bool[256]{};
    }
    void Input::UpdateKey(int keyCode,bool state)
    {
      Keybord[keyCode] = state;
    }
  }
}