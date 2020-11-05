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
  _container[_last + 1] = e;
  _last++;
}

void ArrayStack::pop()
{
  element_t *aux = &_container[_last];
  delete aux;
  _last--;
}
