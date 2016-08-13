#include "FileHandler.h"


namespace Application {

  namespace Core
  {
    FileHandler::FileHandler()
    {
    }


    FileHandler::~FileHandler()
    {
    }

    int FileHandler::OpenFile(char * path, char * buffer)
    {
      FILE* fp;
      fopen_s(&fp,path, "rb");
      fseek(fp, 0, SEEK_END);
      int length = ftell(fp);
      rewind(fp);
      buffer = (char*)malloc(length);
      fread(buffer, length, 1, fp);
      fclose(fp);

      return length;
    }


  }
}