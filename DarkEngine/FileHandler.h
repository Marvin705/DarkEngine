#pragma once
#include <iostream>
namespace Application {

  namespace Core
  {
    class FileHandler
    {
    public:
      FileHandler();
      ~FileHandler();

      //@brief returns the length of the buffer in BYTES 
      int OpenFile(char* path, char* buffer);
    };

  }
}