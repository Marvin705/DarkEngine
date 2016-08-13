#pragma once
#include "Datatypes.h"
#include <iostream>
namespace Application {

  namespace Core
  {
    class ByteBuffer
    {
    public:
      ByteBuffer(de_uint32 size);
      ~ByteBuffer();
      de_uint32 GetSize();
      de_uint8* GetData();
      de_uint8 Get1BYTE(de_uint32 index);
      de_uint16 Get2BYTE(de_uint32 index);
      de_uint32 Get4BYTE(de_uint32 index);
      de_uint64 Get8BYTE(de_uint32 index);
      void Set1BYTE(de_uint32 index, de_uint8 value);
      void Set2BYTE(de_uint32 index, de_uint16 value);
      void Set4BYTE(de_uint32 index, de_uint32 value);
      void Set8BYTE(de_uint32 index, de_uint64 value);
    private:
      de_uint32 size;
      de_uint8* buffer;
    };
 

  }
}