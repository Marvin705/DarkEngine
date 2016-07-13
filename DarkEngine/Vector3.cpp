#include "Vector3.h"


namespace Application
{

  namespace Core
  {
    Vector3::Vector3()
    {
      this->x = 0;
      this->y = 0;
      this->z = 0;
    }


    Vector3::~Vector3()
    {
    }
    Vector3 Vector3::ScalarMul(de_int32 scalar)
    {
      Vector3 re;
      re.x = this->x*scalar;
      re.y = this->y*scalar;
      re.z = this->z*scalar;
      return re;
    }
    de_int32 Vector3::Dot(Vector3 second)
    {
      return this->x*second.x + this->y*second.y + this->z*second.z;
    }
    Vector3 Vector3::Cross(Vector3 second)
    {
      Vector3 re;
      re.x = this->y*second.z - this->z * second.y;
      re.y = this->z* second.x - this->x * second.z;
      re.z = this->x * second.y - this->y *second.x;


      return re;
    }
    Vector3 Vector3::Add(Vector3 second)
    {
      Vector3 re;
      re.x = this->x + second.x;
      re.y = this->y + second.y;
      re.z = this->z + second.z;
      return re;
    }
    Vector3 Vector3::Sub(Vector3 second)
    {
      Vector3 re;
      re.x = this->x - second.x;
      re.y = this->y - second.y;
      re.z = this->z - second.z;
      return re;
    }
  }
}