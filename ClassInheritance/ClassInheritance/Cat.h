#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "Mammal.h"

class Cat : public Mammal
{
public:
	Cat()
	{
		cout << "A cat is born" << endl;
	}

	~Cat()
	{
		cout << "The cat has died" << endl;
	}

	virtual void talk() override
	{
		cout << "Meow!" << endl;
	}

	// Implements walking for a cat .. same as dog!

	virtual void walk() override
	{
		cout << "Left front paw & back right paw, right front paw & back left paw..at the speed of " << speed << endl;
	}
};
