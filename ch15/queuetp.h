// queuetp.h -- szablon Queue z klasą zagnieżdżoną
#ifndef QUEUETP_H_
#define QUEUETP_H_

template <class Item>
class QueueTP
{
    private:
        enum {Q_SIZE = 10};
        // definicje klasy zagnieżdżonej Node
        class Node
        {
            public:
                Item item;
                Node * next;
                Node(const Item &i) : item(i), next(0) {}
        };
        Node * front;       // wskaźnik na przód kolejki
        Node * rear;        // wskaźnik na tył kolejki
        int items;          // aktualna liczba elementów w kolejce
        const int qsize;    // maksymalna liczba elementów w kolejce
        QueueTP(const QueueTP &q) : qsize(0) {}
        QueueTP & operator=(const QueueTP &q) {return *this;}
    public:
    QueueTP(int us = Q_SIZE);
    ~QueueTP();
    bool isempty() const
    {
        return items == 0;
    }
    bool isfull() const
    {
        return items == qsize;
    }
    int queuecount() const
    {
        return items;
    }
    bool enqueue(const Item & item);    // dodaje element na koniec kolejki
    bool dequeue(Item & item);          // usuwa element z początku kolejki
};

// metody klasy QueueTP
template <class Item>
QueueTP<Item>::QueueTP(int qs) : qsize(qs)
{
    front = rear = 0;
    items = 0;
}

template <class Item>
QueueTP<Item>::~QueueTP()
{
    Node * temp;
    while(front != 0)           // dopóki kolejka nie jest pusta
    {
        temp = front;           // zapisuje adres początku kolejki
        front = front->next;    // ustawia wskaźnik na następny element
        delete temp;            // usuwa dawny początek
    }
}

// dodaje element do kolejki
template <class Item>
bool QueueTP<Item>::enqueue(const Item & item)
{
    if(isfull())
        return false;
    Node * add = new Node(item);    // tworzy element
    // w przypadku błędu new zgłasza wyjątek std::bad_alloc
    items++;
    if(front == 0)          // jeśli kolejka jest pusta,
        front = add;        // dodaje element na początku kolejki
    else
        rear->next = add;   // w przeciwnym razie dodaje na koniec
    rear = add;             // koniec kolejki wskazuje na dodany element
    return true;
}

// umieszcza poczatkowy element w obiekcie item i usuwa z kolejki
template <class Item>
bool QueueTP<Item>::dequeue(Item & item)
{
    if(front == 0)
        return false;
    item = front->item;     // ustawia item na pierwszy element kolejki
    items--;
    Node * temp = front;    // zapisuje adres pierwszego elementu
    front = front->next;    // ustawia początek na następny element
    delete temp;            // usuwa poprzedni początek
    if(items == 0)
        rear = 0;
    return true;
}

#endif