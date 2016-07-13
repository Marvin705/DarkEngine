#include "SceneObject.h"

//DEBUG
//#include "Transform.h"
#include <iostream>
namespace Application
{

  namespace Core
  {

    SceneObject::SceneObject()
    {
      Child = new List();
      transform = new Transform();
    }


    SceneObject::~SceneObject()
    {
      delete Child;
    }
    void SceneObject::Initialize()
    {
    }
    void SceneObject::Update()
    {
      this->transform->position.x = this->transform->position.x + 5;
      for (int i = 0; i < Child->GetItemCount(); i++)
      {
        Child->GetListObject(i)->Update();
      }
    }
    void SceneObject::Draw(IGraphics2D* graphics)
    {
      graphics->DrawRectangle(this->transform->position.x, this->transform->position.y, 50, 50, 0x00FF00, 0);
      printf("Transform x: %d \n", this->transform->position.x);
      printf("Transform y: %d \n", this->transform->position.y);
      printf("Transform z: %d \n", this->transform->position.z);
      printf("Scale x: %d \n", this->transform->scale.x);
      printf("Scale y: %d \n", this->transform->scale.y);
      printf("Scale z: %d \n", this->transform->scale.z);
      printf("ChildCount:%d\n",this->Child->GetItemCount());
      //draw childs
      for (int i = 0; i < Child->GetItemCount(); i++)
      {
        printf("////");
        printf("ChildObject%d:\n", i);
        Child->GetItem(i)->Object->Draw(graphics);
      }
      printf("//////////////////////////////////////////////////\n");
    }
 /*   void SceneObject::AddChild(SceneObject* child)
    {
      this->Child->Add(child);
    }*/
    void SceneObject::AddChild(IGameObject * child)
    {
      this->Child->Add(child);
    }
    Transform* SceneObject::GetTransform()
    {
      return this->transform;
    }
    IGameObject * SceneObject::GetChild(int index)
    {     
      return Child->GetListObject(index);
    }
  }
}