#pragma once
#include "Datatypes.h"
#include "Vector2.h"

namespace Application
{

  namespace Core
  {
    class Transform2D
    {
    public:
      Transform2D();
      ~Transform2D();
      Vector2 position;
      de_int32 rotation;
      Vector2 scale;
    };

  }
}