#include <iostream>
using namespace std;

#include "Mammal.h"

// We declare member of base header file here ( function bodies. )

Mammal::Mammal() // Notice use of :: (scope resolution operator)
{
	hp = 100;
	speed = 1.0;
	cout << "A mammal is created!" << endl;
}

Mammal::~Mammal()
{
	cout << "A mammal has fallen!" << endl;
}

void Mammal::breathe()
{
	cout << "Breathe in ... Breath out ..." << endl;
}

void Mammal::talk()
{
	cout << "Mammal talk ... override this function!" << endl;
}