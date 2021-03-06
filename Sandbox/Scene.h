#pragma once
#include "Datatypes.h"
#include "IScene.h"
#include "List.h"
#include "ListUI.h"
#include <iostream>
#include "Vector3.h"
#include "SceneObject.h"
#include "IGameObject.h"
#include "BaseButton.h"
#include "BaseTextField.h"
#include "Direct2DBitmap.h"
#include "GraphicRessourceManager.h"
namespace Application 
{

  namespace Core 
  {
    class Scene : public IScene
    {
    public:
      Scene();
      ~Scene();
      void Initialize();
      void Update();
      void Draw(IGraphics2D* graphics);
      virtual void LMouse(int x, int y) override;
      virtual void Shutdown() override;
    private:
      List* list;
      ListUI* Uilist;

      // Inherited via IScene
      

      // Inherited via IScene
      

    };


  }
}