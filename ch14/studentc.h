// studentc.h -- deklaracja klasy Student z wykorzystaniem zawierania
#ifndef STUDENTC_H_
#define STUDENTC_H_

#include <iostream>
#include <string>
#include <valarray>

class Student
{
    private:
        typedef std::valarray<double> ArrayDb;
        std::string name;   // obiekt zawierania
        ArrayDb scores; // obiekt zawierania
        // prywatna metoda do wyświetlania wyników
        std::ostream & arr_out(std::ostream & os) const;
    public:
        Student() : name("Brak"), scores() {}
        explicit Student(const std::string & s) : name(s), scores() {}
        explicit Student(int n) : name("Brak"), scores(n) {}
        Student(const std::string & s, int n) : name(s), scores(n) {}
        Student(const std::string & s, const ArrayDb & a) : name(s), scores(a) {}
        Student(const char * str, const double * pd, int n) : name(str), scores(pd, n) {}
        ~Student() {}
        double Average() const;
        const std::string & Name() const;
        double & operator[] (int i);
        double operator[] (int i) const;
        // funkcje zaprzyjaźnione
        // wejście
        friend std::istream & operator>>(std::istream & is, Student & stu); // 1 słowo
        friend std::istream & getline(std::istream & is, Student & stu); // 1 linia
        // wyjście
        friend std::ostream & operator<<(std::ostream & os, const Student & stu);

};

#endif