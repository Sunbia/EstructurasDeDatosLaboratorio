# Listado ADT

## Ejercicios

### Implementación de ADT

1. Dada la siguiente interfaz:

```cpp
typedef int element_t;
class StackADT {
 public:
  virtual bool empty() = 0;
  virtual int size() = 0;
  virtual element_t top() = 0;
  virtual void push(element_t) = 0;
  virtual void pop() = 0;
};
```

Se solicita implementar:

- El ADT Stack mediante Listas.
- El ADT Stack mediante Arreglos.

Se proporciona una plantilla en este repositorio en [stack](stack).

2. Data la siguiente interfaz:

```cpp
typedef int element_t;
class StackADT {
 public:
  virtual bool empty() = 0;
  virtual int size() = 0;
  virtual element_t top() = 0;
  virtual void push(element_t) = 0;
  virtual void pop() = 0;
};
```

Se solicita implementar:

- El ADT Queue mediante Listas.
- El ADT Queue mediante Arreglos.

Se proporciona una plantilla en este repositorio en [queue](queue).

3. Suponga que la interfaz de StackADT a cambiado:

```cpp
typedef int element_t;
class StackADT {
 public:
  virtual bool empty() = 0;
  virtual int size() = 0;
  virtual void push(element_t) = 0;
  virtual element_t pop() = 0;
};
```

Implemente el método `element_t pop()` que retorna el último elemento y lo quita del stack.

- Array
  ```cpp
   element_t ArrayStack::pop()
   {
     element_t _top_ = _container[_last];
     element_t *aux = &_container[_last];
     delete aux;
     _last--;
     return _top_;
   }
  ```
- Linked list
  ```cpp
  element_t ListStack::pop()
  {
    if (this->empty() == false)
    {
      element_t _top_ = _top->e;
      node *aux = _top;
      _top = _top->next;
      delete aux;
      _size--;
      return _top_;
    }
  }
  ```

4. Suponga que no existe el atributo `_size` que guarda el tamaño de un stack (o queue). Implemente la función `int size()`.

- ## Stack

  - Linked list

    ```cpp
    int ListStack::size()
    {
      int size = 0;
      node* aux = _top;
      while(aux != NULL)
      {
    aux = aux->next;
    size++;
      }
      return size;
    }
    ```

  - Stack
    ```cpp
    int ArrayStack::size()
    {
      return _last+1;
    }
    ```

- ## Queue

  - Linked List

    ```cpp
    int ListQueue::size()
    {
      int size = 0;
      node *aux = _head;
      while(aux != NULL)
      {
    size++;
    aux = aux->next;
      }
      return size;
    }
    ```

  - Array
    ```cpp
    int ArrayQueue::size()
    {
      return _front+1;
    }
    ```

5. En la implementación de Stack mediante arreglos, se pide implementar la función `push(element_t)`. Cuando el arreglo se llene, esta función debe aumentar el tamaño del arreglo.

   ```cpp
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
   ```

- Indique el tiempo de ejecución de esta operación en función del tamaño de la entrada.
- ¿Considera que el análisis de complejidad de peor caso es adecuado para esta situación?. Justifique.

### Uso de ADT

**Utilizando solo operaciones de pilas y filas.**

1. Se solicita encontrar un elemento en una pila y quitarlo. Al finalizar, la pila debe entregar la pila sin el elemento, pero con los nodos en el mismo orden relativo.

2. Cree una pila de enteros con datos ingresados por el usuario. Quite los datos de la pila y ordenelos en un arreglo. Replique para una fila.

3. Invierta una pila. Ayuda: Utilice una fila auxiliar. Replique para una fila.

4. Construya la estructura.

```cpp
#include <string>
struct libro{
  std::string isbn;
  std::string nombre;
  std::string autor;
  std::string anho;
  std::string editor;
  bool leido;
}
```

- Cree una pila con 'n' libros.
- A partir de la pila anterior cree 2 pilas. Una con los libros leidos y otra con los libros no leidos.
- Imprima ambas pilas. Indique el tamaño de cada una.
