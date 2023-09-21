#pragma once

#include <iostream>
#include <string>

using namespace std;

#include "Player.h"

Player::Player()
{
	cout << "Player born" << endl;
}

Player::~Player()
{
	cout << "Player died" << endl;
}

