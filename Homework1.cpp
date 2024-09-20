/*	[240920 과제1]
1. 벡터를 이용한 캐릭터 정보 출력하기 (공격력 알아서 넣고)
*/
#include<iostream>
#include<vector>
#include"Player.h"
using namespace std;

int main() {
	vector<int>state = { 10,50 };
	Player* p = new Player("이지원", state[0], state[1]);

	p->State();
}