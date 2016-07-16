#include "BaseTextField.h"


namespace Application
{

  namespace Core
  {
    BaseTextField::BaseTextField()
    {
      transform = new Transform2D();
      this->transform->position.x = 500;
      this->transform->position.y = 500;
      this->transform->scale.x = 100;
      this->transform->scale.y = 50;
      this->text = new WCHAR{};
      this->isActive = true;
      this->isSelected = false;
    }


    BaseTextField::~BaseTextField()
    {
    }
    void BaseTextField::Initialize()
    {
    }
    void BaseTextField::Update()
    {
      if (this->isSelected)
      {
        if (Input::GetInstance()->GetKeyDown(VK_SHIFT))
        {
          //UPERCASE
          //TODO change it to add text instead of simply replacing it
          if (Input::GetInstance()->GetKeyDownC(0x41))
          {
           
            AddText(L"A");
            //this->text = L"A"; 
          }
            else if ((Input::GetInstance()->GetKeyDownC(0x42)))
          {
            AddText(L"B");
            //this->text = L"B";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x43))
          {
            AddText(L"C");
          //  this->text = L"C";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x44))
          {
            AddText(L"D");
          //  this->text = L"D";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x45))
          {
            AddText(L"E");
          //  this->text = L"E";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x46))
          {
            AddText(L"F");
          //  this->text = L"F";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x47))
          {
            AddText(L"G");
          //  this->text = L"G";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x48))
          {
            AddText(L"H");
          //  this->text = L"H";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x49))
          {
            AddText(L"I");
         //   this->text = L"I";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x4A))
          {
            AddText(L"J");
          //  this->text = L"J";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x4B))
          {
            AddText(L"K");
          //  this->text = L"K";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x4C))
          {
            AddText(L"L");
           // this->text = L"L";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x4D))
          {
            AddText(L"M");
          //  this->text = L"M";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x4E))
          {
            AddText(L"N");
           // this->text = L"N";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x4F))
          {
            AddText(L"O");
          //  this->text = L"O";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x50))
          {
            AddText(L"P");
           // this->text = L"P";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x51))
          {
            AddText(L"Q");
          //  this->text = L"Q";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x52))
          {
            AddText(L"R");
          //  this->text = L"R";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x53))
          {
            AddText(L"S");
          //  this->text = L"S";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x54))
          {
            AddText(L"T");
          //  this->text = L"T";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x55))
          {
            AddText(L"U");
           // this->text = L"U";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x56))
          {
            AddText(L"V");
           // this->text = L"V";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x57))
          {
            AddText(L"W");
           // this->text = L"W";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x58))
          {
            AddText(L"X");
            //this->text = L"X";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x59))
          {
            AddText(L"Y");
            //this->text = L"Y";
          }
            else if (Input::GetInstance()->GetKeyDownC(0x5A))
          {
            AddText(L"Z");
            //this->text = L"Z";
          }

        }
        else
        {
          if(Input::GetInstance()->GetKeyDownC(VK_BACK))
          {
            this->Deletelastchar();

          }
          //LOWERCASE
          if (Input::GetInstance()->GetKeyDownC(0x41))
          {
            AddText(L"a");

            //this->Deletelastchar();
            //this->text = L"a";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x42))
          {
            AddText(L"b");
            //this->text = L"b";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x43))
          {
            AddText(L"c");
            //this->text = L"c";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x44))
          {
            AddText(L"d");
            //this->text = L"d";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x45))
          {
            AddText(L"e");
            //  this->text = L"e";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x46))
          {
            AddText(L"f");
            //   this->text = L"f";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x47))
          {
            AddText(L"g");
            // this->text = L"g";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x48))
          {
            AddText(L"h");
            //  this->text = L"h";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x49))
          {
            AddText(L"i");
            //  this->text = L"i";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x4A))
          {
            AddText(L"j");
            //  this->text = L"j";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x4B))
          {
            AddText(L"k");
            //  this->text = L"k";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x4C))
          {
            AddText(L"l");
            //   this->text = L"l";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x4D))
          {
            AddText(L"m");
            //  this->text = L"m";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x4E))
          {
            AddText(L"n");
            //  this->text = L"n";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x4F))
          {
            AddText(L"o");
            //  this->text = L"o";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x50))
          {
            AddText(L"p");
            //  this->text = L"p";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x51))
          {
            AddText(L"q");
            //  this->text = L"q";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x52))
          {
            AddText(L"r");
            //  this->text = L"r";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x53))
          {
            AddText(L"s");
            //  this->text = L"s";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x54))
          {
            AddText(L"t");
            // this->text = L"t";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x55))
          {
            AddText(L"u");
            //  this->text = L"u";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x56))
          {
            AddText(L"v");
            //   this->text = L"v";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x57))
          {
            AddText(L"w");
            // this->text = L"w";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x58))
          {
            AddText(L"x");
            // this->text = L"x";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x59))
          {
            AddText(L"y");
            // this->text = L"y";
          }
          else if (Input::GetInstance()->GetKeyDownC(0x5A))
          {
            AddText(L"z");
            //this->text = L"z";
          }
        }
      


      }
    }
    void BaseTextField::Draw(IGraphics2D * graphics)
    {
      if (this->isSelected)
      {
        graphics->DrawRectangle(this->transform->position.x, this->transform->position.y, this->transform->scale.x, this->transform->scale.y, 0x000000, 1);
        graphics->DrawRectangle(this->transform->position.x, this->transform->position.y, this->transform->scale.x, this->transform->scale.y, 0x0000FF, 0);
         graphics->DrawString(this->transform->position.x, this->transform->position.y, this->text, 0x0000FF);
      }
      else
      {
        graphics->DrawRectangle(this->transform->position.x, this->transform->position.y, this->transform->scale.x, this->transform->scale.y, 0x000000, 1);
        graphics->DrawRectangle(this->transform->position.x, this->transform->position.y, this->transform->scale.x, this->transform->scale.y, 0xFFFFFF, 0);
        graphics->DrawString(this->transform->position.x, this->transform->position.y, this->text, 0xFFFFFF);
      }
      
    }
    void BaseTextField::OnClick()
    {
      
    }
    Transform2D * BaseTextField::GetTransform()
    {
      return this->transform;
    }
    void BaseTextField::SetActive(bool state)
    {
      isActive = state;
    }
    bool BaseTextField::IsActive()
    {
      return isActive;
    }
    void BaseTextField::AddText(WCHAR* add)
    {
      int i = wcslen(this->text) + wcslen(add) + 1;
      WCHAR* temp = new WCHAR[i];
      wcscpy_s(temp, i, this->text);
      wcscat_s(temp, i, add);
      delete[] this->text;
      this->text = temp;
    }

    void BaseTextField::ClearText()
    {
      delete[] this->text;
      this->text = new WCHAR{};
    }

    void BaseTextField::Deletelastchar()
    {
      int i = wcslen(this->text);
      if (i > 0)
      {
        WCHAR* temp = new WCHAR[i];
        wcsncpy_s(temp, i, this->text, i - 1);
        delete[]this->text;
        this->text = temp;
      }
    }

    void BaseTextField::SetSelected(bool state)
    {
      this->isSelected = state;
    }

    bool BaseTextField::IsSelected()
    {
      return  this->isSelected;
    }
    
  }
}