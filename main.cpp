#include <iostream>
#include <string>
#include "WordGame.h"
using namespace std;


int main() {
	cout << "���� �ձ� ������ �����մϴ�" << endl;
	cout << "���ӿ� �����ϴ� �ο��� ����Դϱ�?";
	int num;
	cin >> num;
	WordGame wordgame(num);
	wordgame.StartGame();
}