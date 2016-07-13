#pragma once
#include "Datatypes.h"
#include "ListEntryUI.h"
#include "IUIElement.h"
namespace Application
{

  namespace Core
  {
    class ListUI
    {
    public:
      ListUI();
      ~ListUI();
      ListEntryUI* GetItem(de_int32 index);
      IUIElement* GetListObject(de_int32 index);
      de_int32 GetItemCount();
      //void Add(ListEntry* item); Dec
      //void Add(de_int32 value); Dec
      void Add(IUIElement* obj);
      void Remove(de_int32 index);

    private:
      de_int32 itemcount;
      ListEntryUI* first;
    };


  }
}