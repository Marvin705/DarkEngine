#include "List.h"
namespace Application
{

  namespace Core
  {
    List::List()
    {
      this->first = nullptr;
      this->itemcount = 0;
    }

    List::~List()
    {
    }
    ListEntry* List::GetItem(de_int32 index)
    {
      if (index >= itemcount)
      {
        //ERORR
        return 0;
      }
      else
      {
        ListEntry* indexp = this->first;
        for (int i = 0; i < index; i++)
        {
          indexp = indexp->next;
        }
        return indexp;
      }
      
    }
    IGameObject * List::GetListObject(de_int32 index)
    {
      if (index >= itemcount)
      {
        //ERORR
        return 0;
      }
      else
      {
        ListEntry* indexp = this->first;
        for (int i = 0; i < index; i++)
        {
          indexp = indexp->next;
        }
        return indexp->Object;
      }
    }
    de_int32 List::GetItemCount()
    {
      return  this->itemcount;
    }
   /* void List::Add(ListEntry* item)
    {
      ListEntry* index = first;
      if (index == nullptr)
      {
        this->first = item;
      }
      else
      {
        while (index->next != nullptr)
        {
          index = index->next;
        }
        index->next = item;
      }
      this->itemcount++;
    }*/
    //void List::Add(de_int32 value)
    //{
    //  ListEntry* temp = new ListEntry();
    //  temp->data = value;
    //  ListEntry* index = first;
    //  if (index == nullptr)
    //  {
    //    this->first = temp;
    //  }
    //  else
    //  {
    //    while (index->next != nullptr)
    //    {
    //      index = index->next;
    //    }
    //    index->next = temp;
    //  }
    //  itemcount++;


    //}
    void List::Add(IGameObject* obj)
    {
      ListEntry* temp = new ListEntry();
      temp->Object = obj;
      ListEntry* index = first;
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
    void List::Remove(de_int32 index)
    {
      //TODO
      if (index >= itemcount)
      {
        //ERORR
        return ;
      }
      else
      {
        if (index == 0)
        {
          ListEntry* temp = this->first;
          this->first = this->first->next;
          temp->next = nullptr;
          delete temp;
        }
        else
        {
          //
          ListEntry* tempa = this->first;
          for (int i = 0; i < index - 1; i++)
          {
            tempa = tempa->next;
          }
          ListEntry* tempb = tempa->next;
          tempa->next = tempb->next;
          tempb->next = nullptr;
          delete tempb;
        }
        this->itemcount--;
      }
    }
  }
}