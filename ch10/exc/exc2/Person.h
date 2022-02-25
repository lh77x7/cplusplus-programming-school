#include <iostream>
#include <string>
#include <cstring>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Person {
    private:
        static const int LIMIT = 25;
        string lname;       // nazwisko
        char fname[LIMIT];  // imie
    public:
        Person() { lname = ""; fname[0] = '\0'; }               // #1
        Person(const string & ln, const char * fn = "HejTy");   // #2
        void Show() const;          // w kolejnosci imie nazwisko
        void FormalShow() const;    // w kolejnosci nazwisko imie
};