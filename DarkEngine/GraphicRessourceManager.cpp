#include "GraphicRessourceManager.h"

namespace Application
{

  namespace Core
  {

    GraphicRessourceManager::GraphicRessourceManager()
    {
    }


    GraphicRessourceManager::~GraphicRessourceManager()
    {
    }
    Direct2DBitmap* GraphicRessourceManager::SetRessource(PCWSTR path,IGraphics2D* graphics)
    {
      Direct2DBitmap* tp = new Direct2DBitmap();
      tp->SetData(path, (reinterpret_cast <Direct2D*> (graphics)));
      //(reinterpret_cast <Direct2D*> (graphics))->Decode(path)
      return tp;
    }
 
  }
}