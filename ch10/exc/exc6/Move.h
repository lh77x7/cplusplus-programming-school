#pragma once

#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0); 
	void showmove() const; 
	Move add(const Move & m) const;
	void reset(double a = 0, double b = 0); 
};