#include <iostream>
#include <cstring>
#include "cd.h"

Cd::Cd(const char * s1, const char * s2, int n, double x) : selections(n), playtime(x) { 
	strcpy(performers, s1);
	strcpy(label, s2);
}

Cd::Cd(const Cd & d) : selections(d.selections), playtime(d.playtime) { 
	strcpy(performers, d.performers);
	strcpy(label, d.label);
}

Cd::Cd() : selections(0), playtime(0) { 
	performers[0] = '\0';
	label[0] = '\0';
}

void
Cd::Report() const { 
	std::cout << "Autor: " << performers << ", label: " << label << ", utwory: " << selections << ", czas trwania: " << playtime << std::endl;
}

Cd & Cd::operator=(const Cd & d) { 
	if (this == &d)
		return *this;
	selections = d.selections;
	playtime = d.playtime;
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	return *this;
}

Classic::Classic() : Cd() { 
	mySongName = nullptr;
}

Classic::Classic(const char* song, const char * s1, const char * s2, int n, double x) : Cd(s1, s2, n, x) {
	int len = strlen(song);
	mySongName = new char[len + 1];
	strcpy(mySongName, song);
}

Classic::Classic(const Classic & s) :Cd(s) { 
	int len = strlen(s.mySongName);
	mySongName = new char[len + 1];
	strcpy(mySongName, s.mySongName);
}

Classic::~Classic() { 
	delete[] mySongName;
	mySongName = nullptr;
}

Classic & Classic::operator=(const Classic & d) { 
	if (this == &d)
		return *this;
	Cd::operator=(d); 
	delete[] mySongName; 
	int len = strlen(d.mySongName);
	mySongName = new char[len + 1];
	strcpy(mySongName, d.mySongName);
	return *this;
}

void Classic::Report() const { 
	if (mySongName) { 
		Cd::Report(); 
		std::cout << "Moja nazw utworu: " << mySongName << std::endl;
	}
	else {
		Cd::Report(); 
		std::cout << "Moja nazwa utworu: bez nazwy\n";
	}
}