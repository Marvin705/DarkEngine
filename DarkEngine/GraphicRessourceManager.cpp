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
    void* GraphicRessourceManager::SetRessource(PCWSTR path,IGraphics2D* graphics)
    {
      //(reinterpret_cast <Direct2D*> (graphics))->Decode(path)
      return (reinterpret_cast <Direct2D*> (graphics))->Decode(path);
    }
 
  }
}