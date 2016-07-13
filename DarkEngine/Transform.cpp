#include "Transform.h"
namespace Application
{

  namespace Core
  {


    Transform::Transform()
    {
      this->position.x = 0;
      this->position.y = 0;
      this->position.z = 0;
      this->rotation.x = 0;
      this->rotation.y = 0;
      this->rotation.z = 0;
      this->scale.x = 1;
      this->scale.y= 1;
      this->scale.z = 1;
    }


    Transform::~Transform()
    {
    }
  }
}