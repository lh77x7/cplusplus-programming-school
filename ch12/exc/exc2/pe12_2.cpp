// pe12_2.cpp - rozwiazanie zadania 2 rozdzial 12
#include <iostream>
using namespace std;
#include "string2.h"
int main()
{
	String s1(" I ucze sie C++.");
	String s2 = "Podaj swoje imie: ";
	String s3;
	cout << s2; // przeciążony operator <<
	cin >> s3; // przeciążony operator >>
	s2 = "Mam na imie " + s3; // przeciążony operator = i +
	cout << s2 << ".\n";
	s2 = s2 + s1;
	s2.stringup(); // zmiana ciągu liter na wielkie
	cout << "Ciag\n" << s2 << "\nzawiera " << s2.has('A')
		<< " 'A'.\n";
	s1 = "czerwona"; // String(const char *),
				// a potem String & operator=(const String&)
	String rgb[3] = { String(s1), String("zielona"), String("niebieska") };
	cout << "Podaj nazwe barwy podstawowej: ";
	String ans;
	bool success = false;
	while (cin >> ans)
	{
		ans.stringlow(); // zamiana liter w ciągu na małe
		for (int i = 0; i < 3; i++)
		{
			if (ans == rgb[i]) // overloaded == operator
			{
				cout << "Prawidlowo!\n";
				success = true;
				break;
			}
		}
		if (success)
			break;
		else
			cout << "Sprobuj ponownie!\n";
	}
	cout << "Zegnam\n";
    
	return 0;
}