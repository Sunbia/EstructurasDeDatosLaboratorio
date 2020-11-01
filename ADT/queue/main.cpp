#include <iostream>
#include <cstdlib>
#include "ArrayQueue.hpp"
#include "ListQueue.hpp"

int main(int argc, char const *argv[])
{
  QueueADT *test = new ArrayQueue(); // Se crea una cola abstracta de tipo array
  char sw;
  element_t element;
  std::cout << "1.Enqueue" << std::endl;
  std::cout << "2.Dequeue" << std::endl;
  std::cout << "3.Size" << std::endl;
  std::cout << "4.Front" << std::endl;
  std::cout << "5.Back" << std::endl;
  std::cout << "6.Is Empty" << std::endl;
  std::cout << "7.Exit" << std::endl;
  do
  {
    std::cout << "Ingrese una opcion:" << std::endl;
    std::cin >> sw;
    switch (sw)
    {
    case '1':
      std::cout << "ingrese un valor:" << std::endl;
      std::cin >> element;
      test->enqueue(element);
      break;
    case '2':
      std::cout << "Se elimino el valor: " << test->front() << std::endl;
      test->dequeue();
      break;
    case '3':
      std::cout << test->size() << std::endl;
      break;
    case '4':
      std::cout << test->front() << std::endl;
      break;
    case '5':
      std::cout << test->back() << std::endl;
      break;
    case '6':
      (test->empty()) ? (std::cout << "La cola esta vacia" << std::endl) : 
                      (std::cout << "La cola esta ocupada" << std::endl);
      break;
    default:
      std::cout << "Seleccione una opcion correcta" << std::endl;
      break;
    }
  } while (sw != '7');

  return 0;
}
