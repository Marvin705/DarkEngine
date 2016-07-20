#pragma once
#include "Transform2D.h"
#include "IGraphics2D.h"
namespace Application
{

  namespace Core
  {
    struct IUIElement
    {
      virtual void Initialize() =0;
      virtual void Update()=0;
      virtual void Draw(IGraphics2D* graphics)=0;
      virtual void OnClick()=0;
      virtual void SetSelected(bool state )= 0;
      virtual bool IsSelected() = 0;
      virtual void SetActive(bool state)= 0;
      virtual bool IsActive() = 0;
      virtual Transform2D* GetTransform() = 0; 
      virtual void Dispose() = 0;
    };

  }
}