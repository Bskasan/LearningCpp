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
    // The Constructor
    Player()
    {
        cout << "Player object constructed" << endl;
        name = "Diplo";
    }

    // ~Destructor (~ is not a typo!)
    ~Player()
    {
        cout << "Player object destroyed" << endl;
    }

    // Getters
    string getName() { return name; }
    int getHp() { return hp; }

    // Setters
    void setName(string newName) { name = newName; }
    void setHp(int newHp)
    {
        // Guard the hp variable from taking on negative values
        if (newHp < 0)
        {
            cout << "Error: player hp cannot be less than 0" << endl;
            newHp = 0;
        }

        hp = newHp;
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

    player.setHp(100);
    player.setName("Mike");

    cout << "Player name is => " << player.getName() << endl;

    player.damage(25);

    cout << "Player's current hp is => " << player.getHp() << endl;

    player.recover(10);

    cout << "Player's current hp is => " << player.getHp() << endl;


}

