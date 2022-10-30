#include <iostream>

using namespace std;

class Wezel {
public:
	int wartosc;
	Wezel* lewy;
	Wezel* prawy;

	Wezel(int wartosc) {
		this->wartosc = wartosc;
		this->lewy = NULL;
		this->prawy = NULL;
	}
};

class Drzewo {
public:
	Wezel* korzen;
	Drzewo() {
		korzen = NULL;
	}

	bool czyPuste() {
		return korzen == NULL;
	}
};

int main() {
	Drzewo d;
	d.korzen = new Wezel(5);
	d.korzen->lewy = new Wezel(1);
	d.korzen->prawy = new Wezel(2);
	cout << "Wartosc korzenia:          " << d.korzen << endl;
	cout << "Lewy potomek korzenia:     " << d.korzen << endl;
	cout << "Prawy potomek korzenia:    " << d.korzen << endl;

	return 0;
}