#pragma once
#include "IUIElement.h"
#include <wchar.h>
#include "Input.h"
namespace Application
{

  namespace Core
  {
    class BaseTextField : public IUIElement
    {
    public:
      BaseTextField();
      ~BaseTextField();

      // Inherited via IUIElement
      virtual void Initialize() override;
      virtual void Update() override;
      virtual void Draw(IGraphics2D * graphics) override;
      virtual void OnClick() override;
      virtual Transform2D * GetTransform() override;
      // Inherited via IUIElement
      virtual void SetActive(bool state) override;
      virtual bool IsActive() override;
      void AddText(WCHAR* add);
      void ClearText();
      void Deletelastchar();

      Transform2D* transform;
      WCHAR* text;
      bool isActive;

     
    };

  }
}