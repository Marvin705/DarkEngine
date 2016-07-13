#pragma once
#include "Datatypes.h"
namespace Application
{

  namespace Core
  {
    class Vector3
    {
    public:
      Vector3();
      ~Vector3();
      Vector3 ScalarMul(de_int32 scalar);
      de_int32 Dot(Vector3 second);
      Vector3 Cross(Vector3 second);
      Vector3 Add(Vector3 second);
      Vector3 Sub(Vector3 second);
      de_int32 Length();
      void Normalize();
      de_int32 x;
      de_int32 y;
      de_int32 z;
    };

  }
}