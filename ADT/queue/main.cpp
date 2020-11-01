#include <iostream>
#include <cstdlib>
#include "ArrayQueue.hpp"
#include "ListQueue.hpp"
using std::cout;
using std::endl;
using std::cin;

int main(int argc, char const *argv[])
{
  QueueADT *test = new ArrayQueue(); // Se crea una cola abstracta de tipo array
  char sw;
  element_t element;
  cout << "1.Enqueue" << endl;
  cout << "2.Dequeue" << endl;
  cout << "3.Size" << endl;
  cout << "4.Front" << endl;
  cout << "5.Back" << endl;
  cout << "6.Is Empty" << endl;
  cout << "7.Exit" << endl;
  do
  {
    cout << "Ingrese una opcion:" << endl;
    cin >> sw;
    switch (sw)
    {
    case '1':
      cout << "ingrese un valor:" << endl;
      cin >> element;
      test->enqueue(element);
      break;
    case '2':
      cout << "Se elimino el valor: " << test->front() << endl;
      test->dequeue();
      break;
    case '3':
      cout << "Size:"<< test->size() << endl;
      break;
    case '4':
      cout << "Front:"<<test->front() << endl;
      break;
    case '5':
      cout << "Back:"<<test->back() << endl;
      break;
    case '6':
      (test->empty()) ? (cout << "La cola esta vacia" << endl) : 
                        (cout << "La cola esta ocupada" << endl);
      break;
    case '7':
      break;
    default:
      cout << "Seleccione una opcion correcta" << endl;
      break;
    }
  } while (sw != '7');

  return 0;
}
