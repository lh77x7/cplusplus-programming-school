// cd.h -- plik nagłówkowy dla klasy Cd i klasy pochodnej Classic, ćwiczenie 1 rozdział 13

#ifndef CD_H_
#define CD_H_
// klasa bazowa
class Cd { // reprezentuje płytę CD
private:
	char performers[50];
	char label[20];
	int selections; // liczba utworów
	double playtime; // długość płyty w minutach
public:
	Cd(const char * s1, const char * s2, int n, double x); 
	Cd(const Cd & d); 
	Cd(); 
	virtual ~Cd() {} 
	virtual void Report() const; // wyświetla informacje o wszystkich danych płyty
	Cd & operator=(const Cd & d); 
};

class Classic : public Cd
{
private:
	char* mySongName; // nazwa głównego utworu
public:
	Classic(); // explicit base constructor
	Classic(const char*, const char *, const char *, int, double); 
	Classic(const Classic&); 
	~Classic(); 
	Classic & operator=(const Classic & d); 
	virtual void Report()const; // wyświetla informacje o wszystkich danych płyty
};

#endif