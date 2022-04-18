// stack.h -- deklaracja klasy implementującej stos (ADT), ćwiczenie 4 rozdział 12
#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
private:
	enum { MAX = 10 }; // stała o zasięgu klasy
	Item * pitems; // przechowuje elementy stosu
	int size; // liczba elementów na stosie
	int top; // indeks szczytowego elementu stosu
public:
	Stack(int n = MAX); // tworzy stos o pojemności n elementów
	Stack(const Stack & st); 
	~Stack();
	bool isempty() const;
	bool isfull() const;
	// push() zwraca false, kiedy stos jest pełen, true w pozostałych przypadkach
	bool push(const Item & item); // odkłada element na stos
	// pop() zwraca false, kiedy stos jest pusty, true w pozostałych przypadkach
	bool pop(Item & item); // zdejmuje element ze stosu (do argumentu)
	Stack & operator=(const Stack & st);
};
#endif
