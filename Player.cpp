#include "Player.h"

Player::Player(const string& n, const int a, const int h) :Unit(n, a, h)
{
}

void Player::State()
{
	cout << "---------------------------------------\n";
	cout << name << "�� ���ݷ� : " << attack << "\n";
	cout << name << "�� ü�� : " << health << "\n";
	cout << "---------------------------------------\n";
}