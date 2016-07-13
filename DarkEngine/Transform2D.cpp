#include "Transform2D.h"

namespace Application
{

  namespace Core
  {

    Transform2D::Transform2D()
    {
      this->position.x = 0;
      this->position.y = 0;
      this->rotation = 0;
      this->scale.x = 1;
      this->scale.y = 1;
    }


    Transform2D::~Transform2D()
    {
    }
  }
}