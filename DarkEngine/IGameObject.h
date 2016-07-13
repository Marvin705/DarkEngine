#pragma once
#include "Transform.h"
#include "IGraphics2D.h"
namespace Application
{

  namespace Core
  {
    struct IGameObject
    {
    public:
      virtual void Initialize()=0;
      virtual void Update()=0;
      virtual void Draw(IGraphics2D* graphics)=0;
      virtual void AddChild(IGameObject* child) = 0;
      virtual IGameObject* GetChild(int index) = 0;
      virtual Transform* GetTransform() = 0;
    private:

    };


  }
}