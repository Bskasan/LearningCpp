// Objects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct Player
{
    string name;
    int hp;

    void damage(int amount)
    {
        this->hp -= amount;
    }

    void recover(int amount)
    {
        this->hp += amount;
    }
};

int main()
{
    string s = "Strings are object";
    s.append("!");
    cout << s << endl;
}

