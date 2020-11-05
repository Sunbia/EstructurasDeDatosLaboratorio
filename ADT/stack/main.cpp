#include <iostream>
#include <cstdlib>
// #include "ArrayStack.hpp" (1)
#include "ListStack.hpp"
using std::cin;
using std::cout;
using std::endl;

int main(int argc, char const *argv[])
{
  // Se crea una pila abstracta de tipo array/list
  StackADT *test = new ListStack();
  // StackADT *test = new ArrayStack(); (1)
  char sw;
  element_t element;
  cout << "1.Push" << endl;
  cout << "2.Pop" << endl;
  cout << "3.Size" << endl;
  cout << "4.Top" << endl;
  cout << "5.Is Empty" << endl;
  cout << "6.Exit" << endl;
  do
  {
    cout << "Ingrese una opcion:" << endl;
    cin >> sw;
    switch (sw)
    {
    case '1':
      cout << "ingrese un valor:" << endl;
      cin >> element;
      test->push(element);
      break;
    case '2':
      cout << "Se elimino el valor: " << test->top() << endl;
      test->pop();
      break;
    case '3':
      cout << "Size:" << test->size() << endl;
      break;
    case '4':
      cout << "Front:" << test->top() << endl;
      break;
    case '5':
      (test->empty()) ? (cout << "La pila esta vacia" << endl) : (cout << "La pila esta ocupada" << endl);
      break;
    case '6':
      break;
    default:
      cout << "Seleccione una opcion correcta" << endl;
      break;
    }
  } while (sw != '6');

  return 0;
}
