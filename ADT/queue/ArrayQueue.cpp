#include <cstdio>
#include <cstdlib>
#include "ArrayQueue.hpp"
#define MAX 100
ArrayQueue::ArrayQueue()
{
  _container = new int[MAX];
  _front = -1;
  _back = -1;
  _size = 0;
}

ArrayQueue::~ArrayQueue()
{
  delete[] _container;
}

bool ArrayQueue::empty()
{
  return (_size == 0) ? true : false;
}

int ArrayQueue::size()
{
  return _size;
}

element_t ArrayQueue::front()
{
  return _container[_front];
}

element_t ArrayQueue::back()
{
  return _container[_back];
}

void ArrayQueue::enqueue(element_t e)
{
  if (this->empty())
  {
    _container[0] = e;
    _front++;
    _back++;
    _size++;
  }
  else
  {
    _container[_size] = e;
    _front++;
    _size++;
  }
}
  
void ArrayQueue::dequeue()
{
  element_t *aux = &_container[_front];
  delete aux;
  _front--;
}

