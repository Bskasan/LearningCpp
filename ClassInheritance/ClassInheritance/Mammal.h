#pragma once

#include <iostream>
#include <string>

using namespace std;

class Mammal
{
protected:
	// protected variables are like privates: they are accessible in this class but not outside the class.
	// The difference between protected and private is protected means accessible in derived subclasses also.

	int hp;
	double speed;

public:
	// Mammal constructor - runs first before derived class ctors!
	Mammal();

	// Mammal Destructor
	~Mammal();

	// Common function to all Mammals and derivatives
	void breathe();

	virtual void talk();

	// pure virtual function, (explained below)
	virtual void walk() = 0;
};