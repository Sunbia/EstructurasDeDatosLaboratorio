#include <cstdio>
#include <cstdlib>
#include "ListQueue.hpp"

ListQueue::ListQueue()
{
  _front = NULL;
  _back = NULL;
  _size = 0;
}

ListQueue::~ListQueue()
{
  node *aux = _front;
  while (aux != NULL)
  {
    delete _back;
    _front = _front->next;
  }
}

bool ListQueue::empty()
{
  return _size == 0 ? true : false;
}

int ListQueue::size()
{
  return _size;
}

element_t ListQueue::front()
{
  return _front->e;
}

element_t ListQueue::back()
{
  return _back->e;
}

void ListQueue::enqueue(element_t e)
{
  if (this->empty())
  {
    _back->e = e;
    _front = _back;
    _size++;
  }

  else
  {
    node *aux = new node();
    aux->e = e;
    aux->next = _back;
    _back = aux;
    _size++;
  }
}

void ListQueue::dequeue()
{
  node *aux = _front;
  _front = _front->next
               _back = aux;
}
