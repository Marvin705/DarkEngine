#pragma once
#include "IUIElement.h"
namespace Application
{

  namespace Core
  {
    class BaseButton : public IUIElement
    {
    public:
      BaseButton();
      ~BaseButton();

      // Inherited via IUIELement
      virtual void Initialize() override;
      virtual void Update() override;
      virtual void Draw(IGraphics2D * graphics) override;
      virtual void OnClick() override;
      virtual Transform2D * GetTransform() override;

      

      // Inherited via IUIElement
      virtual void SetActive(bool state) override;
      virtual bool IsActive() override;

      Transform2D* transform;
      WCHAR* text;
      bool isActive;
    };

  }
}