/*	[240920 ����1]
1. ���͸� �̿��� ĳ���� ���� ����ϱ� (���ݷ� �˾Ƽ� �ְ�)
*/
#include<iostream>
#include<vector>
#include"Player.h"
using namespace std;

int main() {
	vector<Player>player;

	player.push_back(Player("������", 10, 50));
	player.push_back(Player("��", 30, 60));
	player.push_back(Player("�̿�", 3, 6));
	
	cout << "=== �÷��̾� ���� ===\n";
	for (auto p : player) {
		p.State();
	}
}