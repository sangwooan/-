#include <iostream>
#include <string>
#include "WordGame.h"
using namespace std;


int main() {
	cout << "끝말 잇기 게임을 시작합니다" << endl;
	cout << "게임에 참가하는 인원은 몇명입니까?";
	int num;
	cin >> num;
	WordGame wordgame(num);
	wordgame.StartGame();
}