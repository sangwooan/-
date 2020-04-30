#include <iostream>
#include "WordGame.h"
using namespace std;
#include "player.h"

WordGame::WordGame(int nplayer) {
	this->nplayer = nplayer;
	players = new Player[nplayer];
}
WordGame::WordGame() {
	nplayer = 3;
}
WordGame::~WordGame() {}



void WordGame::StartGame() {
	string n;
	for (int i = 0; i < nplayer; ++i) {
		cout << "참가자의 이름을 입력하세요. 빈칸 없이>>";
		cin >> n;
		players[i].setName(n);
	}
	cout << endl;
	cout << "시작하는 단어는 아버지입니다" << endl;
	string a = "아버지";
	string b;
	int i = 0;
	while(1) {
		cout << players[i%nplayer].getName() << ">>";
		cin >> b;
		int j = a.length();
		if (a.at(j - 2) == b.at(0) && a.at(j-1) == b.at(1)) {
			a = b;
		}
		else {
			cout << players[i%nplayer].getName() << "LOSE!!" << endl;
			break;
		}
		i++;
	}
}


