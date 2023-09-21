#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "Mammal.h"

class Human : public Mammal
{
	// Data member unique to Human ( not found in other Mammals )
	bool civilized;

public:
	Human()
	{
		cout << "A new human is born" << endl;
		speed = 2.0; // Change speed. Since derived class ctor
		//ctor is short for constructor runs after base class ctor, initialization sticks initialize member variables specific to this class.

		civilized = true;
	}

	~Human()
	{
		cout << "The human has died!" << endl;
	}

	virtual void talk() override
	{
		cout << "I'm good looking for a .... human" << endl;
	}

	// Implements walking for human
	virtual void walk() override
	{
		cout << "Left, right, left, right at the speed of " << speed << endl;
	}

	// Member function unique to human derivative
	void attack()
	{
		// Human refuses to attack if civilized
		if (civilized)
			cout << "Why would a human attack another? Je refuse" << endl;
		else
			cout << "A human attacks another!" << endl;
	}
};
