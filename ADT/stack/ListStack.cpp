#include "ListStack.hpp"
#include <cstdlib>

ListStack::ListStack()
{
  _top = NULL;
  _size = 0;
}

ListStack::~ListStack()
{
  node *aux;
  while (_top != NULL)
  {
    aux = _top;
    _top = _top->next;
    delete aux;
  }
  delete _top;
}

bool ListStack::empty()
{
  return (_size == 0 && _top == NULL) ? true : false;
}

int ListStack::size()
{
  return _size;
}

element_t ListStack::top()
{
  return _top->e;
}

void ListStack::push(element_t e)
{
  if (this->empty())
  {
    _top->e = e;
    _size++;
  }
  else
  {
    node *aux = new node;
    aux->e = e;
    aux->next = _top;
    _top = aux;
    _size++;
  }
}

void ListStack::pop()
{
  if (this->empty())
  {
    return;
  }
  node *aux = _top;
  _top = _top->next;
  delete aux;
  _size--;
}