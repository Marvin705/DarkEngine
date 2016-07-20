#include "ListEntryUI.h"
namespace Application
{

  namespace Core
  {
    ListEntryUI::ListEntryUI()
    {
      //data = 0;
      next = nullptr;
      //Object = new SceneObject();
    }

    ListEntryUI::~ListEntryUI()
    {
      this->Object->Dispose();
    }


  }
}