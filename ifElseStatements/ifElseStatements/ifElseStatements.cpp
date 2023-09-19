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


    bool isHungry = false;

    if (isHungry)
    {
        cout << "Preparing snack..." << endl;
        cout << "Eating..." << endl;
    }
    else
    {
        cout << "I am not hungry..." << endl;
    }

    cout << "Sitting on the couch..." << endl;

    // ------------------------------------------ //

    bool wearingSocks = true;
    bool wearingClothes = true;

    if (!wearingSocks && !wearingClothes)
    {
        cout << "Get some socks on ..." << endl;
    }
    else 
    {
        cout << "You already have socks..." << endl;
    }
}

