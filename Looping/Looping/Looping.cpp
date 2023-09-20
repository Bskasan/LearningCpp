// Looping.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int x = 1;

	while (x <= 5)
	{
		cout << "x is " << x << endl;
		x++;
	}

	while (x <= 10)
	{
		cout << "x is " << x << endl;
		x++;
	}

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
}

