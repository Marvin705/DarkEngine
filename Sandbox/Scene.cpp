#include "Scene.h"


namespace Application
{

  namespace Core
  {
    Scene::Scene()
    {
    }

    Scene::~Scene()
    {
    }
    void Scene::Initialize()
    {
      /*ListEntry* entrya = new ListEntry();
      ListEntry* entryb = new ListEntry();*/
      //entrya->data = 42;
      //entryb->data = 33;
      //
      Uilist = new ListUI();
      BaseButton* button1 = new BaseButton();
      BaseButton* button2 = new BaseButton();
      BaseTextField* field1 = new BaseTextField();
      BaseTextField* field2 = new BaseTextField();
      field2->GetTransform()->position.x = field2->GetTransform()->position.x - 50;
      field2->GetTransform()->position.y = field2->GetTransform()->position.y - 50;

      Uilist->Add(button1);
      Uilist->Add(button2);
      Uilist->Add(field1);
      Uilist->Add(field2);

      button2->GetTransform()->position.x = button2->GetTransform()->position.x + 50;
      button2->GetTransform()->position.y = button2->GetTransform()->position.y + 60;


      list = new List();
      SceneObject* obj1 = new SceneObject();
      SceneObject* obj2 = new SceneObject();
      SceneObject* obj3 = new SceneObject();
      SceneObject* obj4 = new SceneObject();
      SceneObject* obj5 = new SceneObject();
      SceneObject* cobj5 = new SceneObject();
      SceneObject* cobj6 = new SceneObject();
      SceneObject* cobj7 = new SceneObject();
      //
      cobj7->GetTransform()->scale.x = 123;
      obj1->GetTransform()->position.y = 50;
      obj2->GetTransform()->position.y = 60;
      obj3->GetTransform()->position.y = 70;
      obj4->GetTransform()->position.y = 80;
      obj5->GetTransform()->position.y = 90;


      list->Add((obj1));
      list->Add(obj2);
      list->Add(new SceneObject());
      list->Add(obj4);
      list->Add(obj5);

      obj4->AddChild(cobj5);
      cobj5->AddChild(cobj6);
      list->GetListObject(3)->GetChild(0)->GetChild(0)->AddChild(cobj7);
      //obj1->GetTransform()->position.x = 200;
      //list->GetItem(3)->Object->GetTransform()->position.z = 666;
      //list->Add(34);
      //list->Add(67);
      //list->Add(5);
      //list->Add(8);
      //list->Remove(4);
      //list->Add(9);
      //printf("%d \n", list->GetItem(0)->data);
      //printf("%d \n", list->GetItem(1)->data);
      //printf("%d \n", list->GetItem(2)->data);
      //printf("%d \n", list->GetItem(3)->data);
      printf("count: %d \n", list->GetItemCount());
      printf("//////////////////////////////////////////////////\n");

      Vector3 vec1;
      vec1.x = 5;
      vec1.y = 6;
      vec1.z = 8;

      Vector3 vec2;
      vec2.x = 5;
      vec2.y = 8;
      vec2.z = 8;

      Vector3 vec3;
      //Test
      vec3 = vec1.Cross(vec2);
      printf("%d \n", vec3.x);
      printf("%d \n", vec3.y);
      printf("%d \n", vec3.z);
      printf("%d \n", vec1.Dot(vec2));




      //draw
      
    }

    void Scene::Update()
    {
      for (int i = 0; i < list->GetItemCount(); i++)
      {
       
        list->GetListObject(i)->Update();
      }
      for (int i = 0; i < Uilist->GetItemCount(); i++)
      {

        Uilist->GetListObject(i)->Update();

      }
    }
    void Scene::Draw(IGraphics2D* graphics)
    {
      graphics->DrawRectangle(50, 50, 200, 200, 0xFF0000, 1);
      //draw all GameObjects
      for (int i = 0; i < list->GetItemCount(); i++)
      {
        printf("//////////////////////////////////////////////////\n");
        printf("SceneObject%d:\n", i);
        list->GetListObject(i)->Draw(graphics);
        
      }
      //draw all UIElements

      for (int i = 0; i < Uilist->GetItemCount(); i++)
      {
        
        Uilist->GetListObject(i)->Draw(graphics);

      }
    }
    void Scene::LMouse(int x, int y)
    {
      for (int i = 0; i < Uilist->GetItemCount(); i++)
      {
        Transform2D* trans = Uilist->GetListObject(i)->GetTransform();
        if ((x >= trans->position.x) && (x <= trans->position.x + trans->scale.x) && (y >= trans->position.y) && (y <= trans->position.y + trans->scale.y))
        {
          Uilist->GetListObject(i)->OnClick();
          Uilist->GetListObject(i)->SetSelected(true);
        }
        else
        {
          Uilist->GetListObject(i)->SetSelected(false);
        }
        

      }
    }
  }
}