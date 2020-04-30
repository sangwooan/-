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
		cout << "�������� �̸��� �Է��ϼ���. ��ĭ ����>>";
		cin >> n;
		players[i].setName(n);
	}
	cout << endl;
	cout << "�����ϴ� �ܾ�� �ƹ����Դϴ�" << endl;
	string a = "�ƹ���";
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


