#include "Vector2.h"

namespace Application
{

  namespace Core
  {

    Vector2::Vector2()
    {
      this->x = 0;
      this->y = 0;
    }


    Vector2::~Vector2()
    {
    }
    Vector2 Vector2::ScalarMul(de_int32 scalar)
    {
      Vector2 re;
      re.x = this->x * scalar;
      re.y = this->y * scalar;
      return re;
    }
    Vector2 Vector2::Add(Vector2 second)
    {
      Vector2 re;
      re.x = this->x + second.x;
      re.y = this->y + second.y;
      return re;
    }
    Vector2 Vector2::Sub(Vector2 second)
    {
      Vector2 re;
      re.x = this->x - second.x;
      re.y = this->y - second.y;
      return re;
    }
  }
}