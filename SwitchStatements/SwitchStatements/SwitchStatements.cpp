// SwitchStatements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


// enums define a new type of variable!
enum Food
{
    // A variable of type Food can have any of these values.
    Fish,
    Bread,
    Apple,
    Orange
};

int main()
{
    Food food = Bread; // Change the food here.

    switch ( food )
    {
        case Fish:
            cout << "Here fishy fishy fishy" << endl;
            break;
        case Bread:
            cout << "Chomp! Delicious bread!" << endl;
            break;
        case Apple:
            cout << "Mm fruits are good for you" << endl;
            break;
        case Orange:
            cout << "Orange you glad I didn't say banana" << endl;
            break;
        default: // This is where you go in case none
            // of the cases above caught
            cout << "Invalid food" << endl;
            break;
    }

    return 0;
}


