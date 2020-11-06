#include <cstdlib>
#include "ArrayStack.hpp"
#define MAX 10

ArrayStack::ArrayStack()
{
  _container = new int[MAX];
  _last = -1;
}

ArrayStack::~ArrayStack()
{
  delete[] _container;
}

bool ArrayStack::empty()
{
  return _last > -1 ? true : false;
}

int ArrayStack::size()
{
  if (this->empty() == false)
  {
    return _last + 1;
  }

  return 0;
}

element_t ArrayStack::top()
{
  if (this->empty() == false)
  {
    return _container[_last];
  }
}

void ArrayStack::push(element_t e)
{
  if (_last + 1 >= MAX)
  {
    element_t *resize = new element_t[_last + 2];
    for (int i = 0; i < _last; i++)
    {
      resize[i] = _container[i];
    }
    delete[] _container;
    _container = resize;
    _container[_last + 1] = e;
    _last++;
  }
  else
  {
    _container[_last + 1] = e;
    _last++;
  }
}

void ArrayStack::pop()
{
  if (this->empty() == false)
  {
    element_t *aux = &_container[_last];
    delete aux;
    _last--;
  }
}
