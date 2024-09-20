#include<iostream>
#include<vector>
using namespace std;

class Weapon {
	string name;
	int damage;
public:
	Weapon(const string& name, int damage) :name(name), damage(damage) {}
	void Print()const {
		cout << "이름 : " << name << ", 공격력 : " << damage << endl;
	}
};

// 벡터를 값으로 전달하는 함수
void PrintVectorValue(vector<int>vec) {

}
// 참조로
void PrintVectorValue(vector<int>&vec) {

}

int main() {
	// 웨폰 객체를 저장할 벡터 생성
	vector<Weapon>weapon;

	weapon.push_back(Weapon("장검", 50));
	weapon.push_back(Weapon("화살", 10));
	weapon.push_back(Weapon("도끼", 30));
	weapon.push_back(Weapon("단검", 70));

	cout << "무기정보" << endl;

	for (const auto& w : weapon) {
		w.Print();
	}

	vector<Weapon*>weapons;

	weapons.push_back(new Weapon("장검", 10));
	weapons.push_back(new Weapon("화살", 10));
	weapons.push_back(new Weapon("도끼", 10));
	weapons.push_back(new Weapon("단검", 10));
	weapons.push_back(new Weapon("집행검", 100000));

	for (const auto& weapon : weapons) {
		weapon->Print();
	}
	for (auto& weapon : weapons) {
		delete weapon;
	}
}