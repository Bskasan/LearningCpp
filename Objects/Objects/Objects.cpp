// Objects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

struct Armor
{
    string armorName;
    int armorClass;
    double durability;
};

struct Player
{

private:

    string name;
    int hp;
    Armor armor;

public:

    string getName()
    {
        return name;
    }

    void setName(string newName)
    {
        name = newName;
    }

    void damage(int dmgAmount)
    {
        this->hp -= dmgAmount;
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

    Player player;

    player.hp = 100;
    player.name = "Mike";

    cout << "Player name is => " << player.name << endl;

    player.damage(25);

    cout << "Player's current hp is => " << player.hp << endl;

    player.recover(10);

    cout << "Player's current hp is => " << player.hp << endl;


}

