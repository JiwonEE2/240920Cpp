/*	[240920 ����1]
1. ���͸� �̿��� ĳ���� ���� ����ϱ� (���ݷ� �˾Ƽ� �ְ�)
*/
#include<iostream>
#include<vector>
#include"Player.h"
using namespace std;

int main() {
	vector<int>state = { 10,50 };
	Player* p = new Player("������", state[0], state[1]);

	p->State();
}