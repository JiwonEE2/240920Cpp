#include "Unit.h"

Unit::Unit(const string& n, const int a, const int h) :name(n), attack(a), health(h)
{
}

Unit::~Unit()
{
}

void Unit::State()
{
	cout << "---------------------------------------\n";
	cout << name << "의 공격력 : " << attack << "\n";
	cout << name << "의 체력 : " << health << "\n";
	cout << "---------------------------------------\n";
}