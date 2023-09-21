// ClassInheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

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
	Mammal()
	{
		hp = 100;
		speed = 1.0;
		cout << "A mammal is created!" << endl;
	}

	// Mammal Destructor
	~Mammal()
	{
		cout << "A mammal has fallen!" << endl;
	}

	// Common function to all Mammals and derivatives
	void breathe()
	{
		cout << "Breathe in ... Breath out ..." << endl;
	}

	virtual void talk()
	{
		cout << "Mammal talk ... override this function!" << endl;
	}

	// pure virtual function, (explained below)
	virtual void walk() = 0;
};

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


int main()
{
	
}


