// stack.cpp -- metody klasy stosu
#include "stack.h"
Stack::Stack() // tworzy pusty Stos
{
    top = 0;
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
    if(top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

bool Stack::pop(Item & item)
{
    if(top > 0)
    {
        item = items[--top];
        return true;
    }
    else
        return false;
}
