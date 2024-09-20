#pragma once
#include<iostream>
using namespace std;
class Unit
{
protected:
	string name;
	int attack;
	int health;
public:
	Unit(const string& n, const int a, const int h);
	virtual ~Unit();

	void State();
};

