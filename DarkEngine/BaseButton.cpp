#include "BaseButton.h"

namespace Application
{

  namespace Core
  {

    BaseButton::BaseButton()
    {
      transform = new Transform2D();
      this->transform->position.x = 500;
      this->transform->position.y = 500;
      this->transform->scale.x = 100;
      this->transform->scale.y = 50;
      this->text = L"Button";
      this->isActive = false;
    }


    BaseButton::~BaseButton()
    {
      delete this->transform;
    }
    void BaseButton::Initialize()
    {
    }
    void BaseButton::Update()
    {
    }
    void BaseButton::Draw(IGraphics2D * graphics)
    {
      graphics->DrawRectangle(this->transform->position.x, this->transform->position.y, this->transform->scale.x, this->transform->scale.y, 0xFF0000, 1);
      graphics->DrawRectangle(this->transform->position.x, this->transform->position.y, this->transform->scale.x, this->transform->scale.y, 0x0000FF, 0);
      graphics->DrawString(this->transform->position.x, this->transform->position.y, this->text, 0x00FF00);
    }
    void BaseButton::OnClick()
    {
      this->text = L"Clicked";
    }
    Transform2D * BaseButton::GetTransform()
    {
      return transform;
    }
    void BaseButton::SetActive(bool state)
    {
      isActive = state;
    }
    bool BaseButton::IsActive()
    {
      return isActive;
    }
    void BaseButton::SetSelected(bool state)
    {
      this->isSelected = state;
    }
    bool BaseButton::IsSelected()
    {
      return  this->isSelected;
    }
    void BaseButton::Dispose()
    {
      delete this;
    }
  }
}