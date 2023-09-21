// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int array[5]; // Declare an "array" of 5 integers#
				  // fill slots 0-4 with values

	array[0] = 10;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;

	// Print out contents
	for (int i = 0; i < 5; i++)
		cout << array[i] << endl;
}


