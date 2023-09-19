// ifElseStatements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x = 10;
    int y = 22;

    // we need to check if they're equal or not
    // 1 means true, 0 means false.
    // if you want to see true/false use boolalpha in your code.
    cout << "Is x equal to y? C++ says: " << boolalpha << (x == y) << endl;
}

