#include "ListUI.h"
namespace Application
{

  namespace Core
  {
    ListUI::ListUI()
    {
      this->first = nullptr;
      this->itemcount = 0;
    }

    ListUI::~ListUI()
    {
    }
    ListEntryUI* ListUI::GetItem(de_int32 index)
    {
      if (index >= itemcount)
      {
        //ERORR
        return 0;
      }
      else
      {
        ListEntryUI* indexp = this->first;
        for (int i = 0; i < index; i++)
        {
          indexp = indexp->next;
        }
        return indexp;
      }

    }
    IUIElement * ListUI::GetListObject(de_int32 index)
    {
      if (index >= itemcount)
      {
        //ERORR
        return 0;
      }
      else
      {
        ListEntryUI* indexp = this->first;
        for (int i = 0; i < index; i++)
        {
          indexp = indexp->next;
        }
        return indexp->Object;
      }
    }
    de_int32 ListUI::GetItemCount()
    {
      return  this->itemcount;
    }

    void ListUI::Add(IUIElement* obj)
    {
      ListEntryUI* temp = new ListEntryUI();
      temp->Object = obj;
      ListEntryUI* index = first;
      if (index == nullptr)
      {
        this->first = temp;
      }
      else
      {
        while (index->next != nullptr)
        {
          index = index->next;
        }
        index->next = temp;
      }
      itemcount++;
    }
    void ListUI::Remove(de_int32 index)
    {
      //TODO
      if (index >= itemcount)
      {
        //ERORR
        return;
      }
      else
      {
        if (index == 0)
        {
          ListEntryUI* temp = this->first;
          this->first = this->first->next;
          temp->next = nullptr;
          delete temp;
        }
        else
        {
          //
          ListEntryUI* tempa = this->first;
          for (int i = 0; i < index - 1; i++)
          {
            tempa = tempa->next;
          }
          ListEntryUI* tempb = tempa->next;
          tempa->next = tempb->next;
          tempb->next = nullptr;
          delete tempb;
        }
        this->itemcount--;
      }
    }
  }
}