#include<iostream>
#include<vector>
using namespace std;

class Weapon {
	string name;
	int damage;
public:
	Weapon(const string& name, int damage) :name(name), damage(damage) {}
	void Print()const {
		cout << "�̸� : " << name << ", ���ݷ� : " << damage << endl;
	}
};

// ���͸� ������ �����ϴ� �Լ�
void PrintVectorValue(vector<int>vec) {

}
// ������
void PrintVectorValue(vector<int>&vec) {

}

int main() {
	// ���� ��ü�� ������ ���� ����
	vector<Weapon>weapon;

	weapon.push_back(Weapon("���", 50));
	weapon.push_back(Weapon("ȭ��", 10));
	weapon.push_back(Weapon("����", 30));
	weapon.push_back(Weapon("�ܰ�", 70));

	cout << "��������" << endl;

	for (const auto& w : weapon) {
		w.Print();
	}

	vector<Weapon*>weapons;

	weapons.push_back(new Weapon("���", 10));
	weapons.push_back(new Weapon("ȭ��", 10));
	weapons.push_back(new Weapon("����", 10));
	weapons.push_back(new Weapon("�ܰ�", 10));
	weapons.push_back(new Weapon("�����", 100000));

	for (const auto& weapon : weapons) {
		weapon->Print();
	}
	for (auto& weapon : weapons) {
		delete weapon;
	}
}