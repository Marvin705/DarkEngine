#pragma once
#include "Datatypes.h"
#include "ListEntry.h"
#include "IGameObject.h"
namespace Application
{

  namespace Core
  {
    class List
    {
    public:
      List();
      ~List();
      ListEntry* GetItem(de_int32 index);
      IGameObject* GetListObject(de_int32 index);
      de_int32 GetItemCount();
      //void Add(ListEntry* item); Dec
      //void Add(de_int32 value); Dec
      void Add(IGameObject* obj);
      void Remove(de_int32 index);

    private:
      de_int32 itemcount;
      ListEntry* first;
    };


  }
}