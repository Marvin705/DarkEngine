#pragma once
#include "IGameObject.h"
#include "Transform.h"
#include "List.h"
#include "IGraphics2D.h"
namespace Application
{

  namespace Core
  {
    class SceneObject: public IGameObject
    {
    public:
      SceneObject();
      ~SceneObject();
      void Initialize();
      void Update();
      void Draw(IGraphics2D* graphics);
      IGameObject * GetChild(int index);
      void AddChild(IGameObject * child);
      Transform* GetTransform();

     // Inherited via IGameObject
      
      Transform* transform;
      List* Child;

      // Inherited via IGameObject
      virtual void Dispose() override;
    };

  }
}