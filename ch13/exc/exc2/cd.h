// cd.h -- plik nagłówkowy dla klasy Cd i klasy pochodnej Classic, ćwiczenie 2 rozdział 13

#ifndef CD_H_
#define CD_H_
// base class
class Cd { // represents a CD disk
private:
	char* performers;
	char* label;
	int selections; // number of selections
	double playtime; // playing time in minutes
public:
	Cd(const char * s1, const char * s2, int n, double x); // overload constructor
	Cd(const Cd & d); // explicit copy constructor
	Cd(); // explicit default constructor
	virtual ~Cd(); // explicit virtual destructor for the base class
	virtual void Report() const; // reports all CD data
	Cd & operator=(const Cd & d); // overloaded assignment operator
};


// class Classic
class Classic : public Cd
{
private:
	char* mySongName; // main song name
public:
	Classic(); // explicit base constructor
	Classic(const char*, const char *, const char *, int, double); // overload constructor
	Classic(const Classic&); // explicit copy constructor
	~Classic(); // explicit base destructor
	Classic & operator=(const Classic & d); // overloaded assignment operator
	virtual void Report()const; // reports all CD data
};

#endif