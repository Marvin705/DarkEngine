#pragma once
#include "Datatypes.h"
//#include "SceneObject.h"
#include "IUIElement.h"
namespace Application
{

  namespace Core
  {
    // class SceneObject;//Forward Declaration to prevet Circle
    class ListEntryUI
    {
    public:
      ListEntryUI();
      ~ListEntryUI();
      ListEntryUI* next;
      //de_int32 data;
      IUIElement* Object;
    private:

    };



  }
}