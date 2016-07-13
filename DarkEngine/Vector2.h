#pragma once
#include "Datatypes.h"
namespace Application
{

  namespace Core
  {
    class Vector2
    {
    public:
      Vector2();
      ~Vector2();
      Vector2 ScalarMul(de_int32 scalar);
      Vector2 Add(Vector2 second);
      Vector2 Sub(Vector2 second);
      de_int32 x;
      de_int32 y;
    };

  }
}