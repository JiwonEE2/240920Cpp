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
	cout << name << "�� ���ݷ� : " << attack << "\n";
	cout << name << "�� ü�� : " << health << "\n";
	cout << "---------------------------------------\n";
}