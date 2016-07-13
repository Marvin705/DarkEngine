#pragma once
#include "Datatypes.h"
//#include "SceneObject.h"
#include "IGameObject.h"
namespace Application
{

  namespace Core
  {
   // class SceneObject;//Forward Declaration to prevet Circle
    class ListEntry
    {
    public:
      ListEntry();
      ~ListEntry();
      ListEntry* next;
      //de_int32 data;
      IGameObject* Object;
    private:
      
    };



  }
}