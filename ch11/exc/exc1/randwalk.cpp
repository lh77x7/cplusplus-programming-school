#include <iostream>
#include <cstdlib>      // rand(), srand() 
#include <ctime>        // time() 
#include<fstream>
#include "vect.h"

int main()
{
    using namespace std;
    std::ofstream plikwyjsciowy;
    plikwyjsciowy.open("plikwyjsciowy.txt");
    using VECTOR::Vector;
    srand(time(0)); // inicjalizacja generatora liczb losowych
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    cout << "Podaj dystans do przejscia (k, aby zakonczyc): ";
    while (cin >> target)
    {
        cout << "Podaj dlugosc kroku: ";
        if(!(cin >> dstep))
            break;

        plikwyjsciowy << "Dystans do przejscia: 100, dlugosc kroku: 20\n";

        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = result + step;
            plikwyjsciowy << steps << ": " << result << "\n";
            steps++;
        }

        plikwyjsciowy << "Po " << steps << " krokach delikwent osiagnal polozenie:\n";
        plikwyjsciowy << result << endl;
        result.polar_mode();
        plikwyjsciowy << " czyli\n" << result << endl;
        plikwyjsciowy << "Srednia dlugosc kroku pozornego = " << result.magval() / steps << endl;
        steps = 0;
        result.reset(0.0, 0.0);
        cout << "Podaj dystans do przejscia (k, aby zakonczyc): ";
    }
    
    cout << "Koniec!\n";
    cin.clear();
    while(cin.get() !='\n')
        continue;
        
    return 0;
}