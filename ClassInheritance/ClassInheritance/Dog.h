#pragma once

#include <iostream>
#include <string>
using namespace std;

#include "Mammal.h"

// This next line says "class Dog inherits from class Mammal"
class Dog : public Mammal // : is used for inheritance
{
public:
	Dog()
	{
		cout << "A dog is born!" << endl;
	}

	~Dog()
	{
		cout << "The dog died!" << endl;
	}

	virtual void talk() override
	{
		cout << "Woof!" << endl; // Dogs only say woof!
	}

	virtual void walk() override
	{
		cout << "Left front paw & back right paw, right front paw & back left paw..at the speed of " << speed << endl;
	}
};
