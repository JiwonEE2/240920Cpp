/*
���ø�

<�Լ� ���ø�>
- �Լ��� �ʿ��� �ڷ����� �����ϰ� �Լ� ȣ�� �� �ڷ����� �������־� ���
- ���ø����� �ۼ� �Լ��� ȣ���ϴ� ���� �ڷ����� �´� �Լ��� �����Ͽ� ���

<Ŭ���� ���ø�>
- �پ��� ������ Ÿ���� �����ϴ� Ŭ������ ����
- ���ø� �Ű������� ���� Ŭ������ ��������� ����Լ��� Ÿ���� �Ϲ�ȭ�� �� ����
- Ŭ������ �ʿ��� �ڷ����� �����ϰ� Ŭ���� �ڷ����� ����
- ���ø����� �ۼ��� Ŭ������ ȣ���ϴ� ���� �ڷ����� �´� Ŭ������ �����Ͽ� ���
*/


#include<iostream>
using namespace std;

//int GetMax(int x, int y) {
//	if (x > y) {
//		return x;
//	}
//	else {
//		return y;
//	}
//}
//float GetMax(float x, float y) {
//	if (x > y) {
//		return x;
//	}
//	else {
//		return y;
//	}
//}
// ���� ���ø�ȭ?(�Լ� ���ø�)

template <typename T>
T GetMax(const T x, const T y) {
	if (x > y) {
		return x;
	}
	else {
		return y;
	}
}

template <typename T>
void Output(const T data) {
	cout << "������ : " << data << endl;
}

template <typename T>
void Output1(T a, T b) {
	cout << a << ", " << b << endl;
}
template <typename T1, typename T2>
void Output1(T1 a, T2 b) {
	cout << a << ", " << b << endl;
}

template<typename T>
class Box {
	T data;
public:
	void SetData(T data) {
		this->data = data;
	}
	T GetData() {
		return data;
	}
	// void Print();
};

template<typename T1,typename T2>
class Box2 {
	T1 firstData;
	T2 secondData;
public:
	T1 GetFirst() {
		return firstData;
	}
	T2 GetSecond() {
		return secondData;
	}

	void SetFirst(T1 val) {
		firstData = val;
	}
	void SetSecond(T2 val) {
		secondData = val;
	}
};

int main() {
	Output(1);
	Output("asdf");
	Output(1.5);

	Output1(1, 2);
	Output1(1, 1.5);

	Box<int> box;
	box.SetData(100);
	cout << box.GetData() << endl;

	Box<double> box1;
	box1.SetData(3.1415);
	cout << box1.GetData() << endl;

	Box2<int, double>box2;
	box2.SetFirst(10);
	box2.SetSecond(3.14);
}

// �Լ�/���� ����� ���� �� �ڵ����� ���ø�ȭ
//template<typename T>
//void Box<T>::Print()
//{
//}