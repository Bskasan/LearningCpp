// Exercise1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


int main()
{
	int age;
	string name;

	cout << "Name ?" << endl;
	cin >> name;

	cout << "Age ?" << endl;
	cin >> age;

	printf("My age is %d, and my name is %s, congratulations!", age, name.c_str() );
	
}

