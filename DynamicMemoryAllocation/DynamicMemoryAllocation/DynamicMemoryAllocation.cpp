// DynamicMemoryAllocation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

#include "Player.h"

int main()
{
	// "dynamic alloacation" - using keyword new!
	// This style of allocation means that the player object will NOT be deleted automatically at the end of the block where it was declared!
	Player* player = new Player();

	// Delete operator invokes the destructor on the object being deleted, as shown in the following code;

	delete player; // Deletion invokes dtor



} // --- NO AUTOMATIC DELETION ---


