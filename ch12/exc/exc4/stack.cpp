// stack.cpp -- ćwiczenie 4 rozdział 12, implementacja funkcji klasy Stack
#include "stack.h"

Stack::Stack(int n) : size(n), top(0)    // utwórz pusty stos
{
	if (size) // jeśli liczba elementów jest większa niż 0
		pitems = new Item[n];
	else
		pitems = nullptr;
}

Stack::Stack(const Stack & st) : size(st.size), top(st.top) { // przeciążony "głęboki" konstruktor
	if (size) { // jeśli liczba elementów jest większa niż 0
		pitems = new Item[size];
		for (int i = 0; i < size; ++i)
			pitems[i] = st.pitems[i];
	}
	else
		pitems = nullptr;
}

Stack::~Stack() { // destruktor
	delete[]pitems;
	pitems = nullptr;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const Item & item)
{
	if (top < MAX)
	{
		pitems[top++] = item;
		return true;
	}
	else
		return false;
}

bool Stack::pop(Item & item)
{
	if (top > 0)
	{
		item = pitems[--top];
		return true;
	}
	else
		return false;
}

Stack & Stack::operator=(const Stack & st) {
	if (this == &st)
		return *this;
	delete[] pitems;
	size = st.size;
	top = st.top;
	if (size) { // jeśli liczba elementów jest większa niż 0
		pitems = new Item[size];
		for (int i = 0; i < size; ++i)
			pitems[i] = st.pitems[i];
	}
	else
		pitems = nullptr;
	return *this;
}
