// Looping.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	

	int y = 10;

	while (y >= 1)
	{
		cout << "y is " << y << endl;
		y--;
	}

	int z = 1;

	while (z <= 20)
	{
		if (z % 2 == 0)
		{
			cout << "z is " << z << endl;
		}

		z++;
	}

	cout << "Loop Finished!" << endl;

	// ---------- do while loop -------------- //
	int num1 = 1;
	do
	{
		cout << "Number is " << num1 << endl;
		num1++;
	} while (num1 <= 5); // may only loop back when x<=5

	cout << "End of program" << endl;
}

