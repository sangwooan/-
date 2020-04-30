#pragma once
#include "player.h"
#include <string>
using namespace std;

class WordGame {
	Player *players;
	int nplayer;
public:
	WordGame(int nplayer);
	WordGame();
	~WordGame();
	void StartGame();
};