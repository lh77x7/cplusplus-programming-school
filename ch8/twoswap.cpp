// twoswap.cpp -- specjalizacja nadpisuje szablon
#include <iostream>
template <typename T>
void Swap(T &a, T &b);

struct job
{
    char name[40];
    double salary;
    int floor;
};

// jawna specjalizacja
template <> void Swap <job> (job &j1, job &j2);
void Show(job &j);

int main(){
    using namespace std;
    cout.precision(2);
    cout.setf(ios::fixed, ios::floatfield);
    int i = 10, j = 20;
    cout << "i, j = " << i << ", " << j << endl;
    cout << "Uzycie generowanej przez kompilator funkcji "
    "zmieniajacej wartosc int:\n";
    Swap(i, j);
    cout << "Teraz i,j = " << i << ", " << j << endl;

    job sue = {"Susan Yaffee", 73000.60, 7};
    job sidney = {"Sidnay Taffee", 78060.72, 9};
    cout << "Przed zmiana struktur job:\n";
    Show(sue);
    Show(sidney);
    Swap(sue, sidney);  // używa void Swap(job &, job &)
    cout << "Po zmianie struktur job:\n";
    Show(sue);
    Show(sidney);

    return 0;
}

template <typename T>
void Swap(T &a, T &b) // wersja ogólna
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}

// zamienia tylko pola salary i floor struktury job

template <> void Swap <job>(job &j1, job &j2)   // specjalizacja
{
    double t1;
    int t2;
    t1 = j1.salary;
    j1.salary = j2.salary;
    j2.salary = t1;
    t2 = j1.floor;
    j1.floor = j2.floor;
    j2.floor = t2;
}

void Show(job &j)
{
    using namespace std;
    cout << j.name << ": " << j.salary 
    << "zl na pietrze " << j.floor << endl;
}