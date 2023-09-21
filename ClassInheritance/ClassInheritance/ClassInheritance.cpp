// ClassInheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

#include "Mammal.h"
#include "Dog.h"
#include "Cat.h"
#include "Human.h"


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


