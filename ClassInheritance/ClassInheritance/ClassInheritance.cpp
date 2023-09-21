// ClassInheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

#include "Mammal.h"
#include "Dog.h"
#include "Cat.h"

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


int main()
{
	Human human;
	human.breathe(); // Breath using mammal base class functionality.
	human.talk();
	human.walk();

	Cat cat;
	cat.breathe();
	cat.talk();
	cat.walk();

	Dog dog;
	dog.breathe();
	dog.talk();
	dog.walk();
}


