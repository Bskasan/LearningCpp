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


