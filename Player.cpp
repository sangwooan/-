#include <iostream>
#include <string>
using namespace std;
#include "player.h"


void Player::setName(string name) {
	this->name = name;
}

string Player::getName() {
	return name;
}