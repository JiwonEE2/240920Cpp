#include "Player.h"

Player::Player(const string& n, const int a, const int h) :Unit(n, a, h)
{
}

void Player::State()
{
	cout << "---------------------------------------\n";
	cout << name << "의 공격력 : " << attack << "\n";
	cout << name << "의 체력 : " << health << "\n";
	cout << "---------------------------------------\n";
}