#include <iostream>
using namespace std;
#include "cd.h"
void Bravo(const Cd & disk);
int main()
{
	Cd c1("Beatles", "Capitol", 14, 35.5);
	Classic c2 = Classic("Sonata fortepianowa B-dur, Fantazja C-moll",
		"Alfred Brendel", "Philips", 2, 57.17);
	Cd *pcd = &c1;
	cout << "Bezposrednie uzycie obiektu:\n";
	c1.Report(); // używa metody klasy Cd
	c2.Report(); // używa metody klasy Classic
	cout << "--------------------------\n";
	cout << "\nUzycie wskaznika na typ Cd:\n";
	pcd->Report(); // używa metody klasy Cd dla obiektu tej klasy
	pcd = &c2;
	pcd->Report(); // używa metody klasy Classic dla obiektu tej klasy
	cout << "--------------------------\n";
	cout << "\nWywolanie funkcji z argumentem w postaci referencyjnej do typu Cd:\n";
	Bravo(c1);
	Bravo(c2);
	cout << "--------------------------\n";
	cout << "\nTest przypisania: ";
	Classic copy;
	copy = c2;
	copy.Report();

	return 0;
}
void Bravo(const Cd & disk)
{
	disk.Report();
}