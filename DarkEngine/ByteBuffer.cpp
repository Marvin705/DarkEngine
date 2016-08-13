#include "ByteBuffer.h"

namespace Application {

  namespace Core
  {

 /*   ByteBuffer::ByteBuffer()
    {
    }*/


    Application::Core::ByteBuffer::ByteBuffer(de_uint32 size)
    {
      this->size = size;
      this->buffer = (de_uint8*)malloc(size);
    }

    ByteBuffer::~ByteBuffer()
    {
      free (this->buffer);
    }

    de_uint32 Application::Core::ByteBuffer::GetSize()
    {
      return this->size;
    }

    de_uint8 * Application::Core::ByteBuffer::GetData()
    {
      return this->buffer;
    }

    de_uint8 Application::Core::ByteBuffer::Get1BYTE(de_uint32 index)
    {
      return this->buffer[index];
    }

    de_uint16 Application::Core::ByteBuffer::Get2BYTE(de_uint32 index)
    {
      return *(de_uint16*)(&this->buffer[index]);
    }

    de_uint32 Application::Core::ByteBuffer::Get4BYTE(de_uint32 index)
    {
      return *(de_uint32*)(&this->buffer[index]);
    }

    de_uint64 Application::Core::ByteBuffer::Get8BYTE(de_uint32 index)
    {
      return *(de_uint64*)(&this->buffer[index]);
    }

    void Application::Core::ByteBuffer::Set1BYTE(de_uint32 index, de_uint8 value)
    {
      this->buffer[index] = value;
    }

    void Application::Core::ByteBuffer::Set2BYTE(de_uint32 index, de_uint16 value)
    {
      de_uint16* p = (de_uint16*)(&this->buffer[index]);
      *p = value;
    }

    void Application::Core::ByteBuffer::Set4BYTE(de_uint32 index, de_uint32 value)
    {
      de_uint32* p = (de_uint32*)(&this->buffer[index]);
      *p = value;
    }

    void Application::Core::ByteBuffer::Set8BYTE(de_uint32 index, de_uint64 value)
    {
      de_uint64* p = (de_uint64*)(&this->buffer[index]);
      *p = value;
    }
  }
}