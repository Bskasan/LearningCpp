// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string aNames[3];
	int array[5]; // Declare an "array" of 5 integers#
				  // fill slots 0-4 with values

	array[0] = 10;
	array[1] = 2;
	array[2] = 3;
	array[3] = 4;
	array[4] = 5;

	aNames[0] = "Bekir";
	aNames[1] = "Mike";
	aNames[2] = "John";


	// Print out contents
	for (int i = 0; i < 5; i++)
		cout << array[i] << endl;

	for (int i = 0; i < 5; i++)
		cout << aNames[i] << endl;
}


