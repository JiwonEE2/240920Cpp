/*	[240920 과제1]
1. 벡터를 이용한 캐릭터 정보 출력하기 (공격력 알아서 넣고)
*/
#include<iostream>
#include<vector>
#include"Player.h"
using namespace std;

int main() {
	vector<Player>player;

	player.push_back(Player("이지원", 10, 50));
	player.push_back(Player("원", 30, 60));
	player.push_back(Player("미원", 3, 6));
	
	cout << "=== 플레이어 정보 ===\n";
	for (auto p : player) {
		p.State();
	}
}