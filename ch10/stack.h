// stack.h -- definicja klasy stosu (wg ADT)
#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
    private:
        enum {MAX = 10};    // stała zasięgu klasy
        Item items[MAX];    // przechowuje elementy stosu
        int top;            // indeks szczytowego elementu stosu
    public:
        Stack();
        bool isempty() const;
        bool isfull() const;
        // push() zwraca false, jesli stos jest juz pelen (true w pozostałych przypadkach)
        bool push(const Item & item);    // odkłada element na stos
        // pop() zwraca false, jesli stos jest już pusty (true w pozostałych przypadkach)
        bool pop(Item & item);
};

#endif