// setf.cpp -- sterowanie formatowaniem za pomocą setf()
#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    using std::ios_base;

    int temperature = 26;

    cout << "Dzisiejsza temperatura wody: ";
    cout.setf(ios_base::showbase);  // pokaż znak plus
    cout << temperature << endl;

    cout << "Dla naszych znajomych programistow bedzie to\n";
    cout << std::hex << temperature << endl;    // zapis szesnastkowy
    cout.setf(ios_base::uppercase);     // wielkie litery w zapisie szesnastkowym
    cout.setf(ios_base::showbase);      // przedrostek 0x w zapisie szesnastkowym
    cout << "lub\n";
    cout << temperature << endl;

    cout << "Jakie to prawdziwe (czyli " << true << ")! ojej -- Jakie to prawdziwe (czyli ";
    cout.setf(ios_base::boolalpha);
    cout << true << ")!\n";

    return 0;
}