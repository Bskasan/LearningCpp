// DynamicSizeArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "How big?" << endl;
	
	int size; // try and use a variable for size..
	cin >> size;
	int* array = new int[size]; // this works

	// fill the array and print
	for (int index = 0; index < size; index++)
	{
		array[index] = index * 2;
		cout << array[index] << endl;
	}

	delete[] array; // must call delete[] on array allocated with
	// new[]!
}


