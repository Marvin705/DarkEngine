#pragma once
#include "Vector3.h"
namespace Application
{

  namespace Core
  {
    class Transform
    {
    public:
      Transform();
      ~Transform();
      Vector3 position;
      Vector3 rotation;
      Vector3 scale;
    };

  }
}