// arfupt.cpp -- tablica wskaźników do funkcji
#include <iostream>

// różne zapisy, a te same sygnatury
const double *f1(const double ar[], int n);
const double *f2(const double [], int);
const double *f3(const double *, int);

int main(){

    using namespace std;
    double av[3] = {1112.3, 1542.6, 2227.9};
    // wskaznik funkcji
    const double *(*p1)(const double *, int) = f1;
    auto p2 = f2;   // automatyczna dedukcja typów w C++11 
    cout << "Uzywanie wskaznikow do funkcji:\n";
    cout << " adres wartosc zwracana\n";
    cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl;
    cout << p2(av, 3) << ": " << *p2(av, 3) << endl;
    const double *(*pa[3])(const double *, int) = {f1, f2, f3};
    auto pb = pa;
    /* code
    używanie tablicy wskaźników do funkcji
    używanie wskaźników do wskaźników do funkcji
    używanie wskaźników do tablicy wskaźników do funkcji
    end code */ 

    return 0;
}

// kila funkcji atrap
const double *f1(const double *ar, int n){
    return ar;
}

const double *f2(const double ar[], int n){
    return ar + 1;
}

const double *f3(const double ar[], int n){
    return ar + 2;
}