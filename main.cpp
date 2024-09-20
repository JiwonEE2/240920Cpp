/*
템플릿

<함수 템플릿>
- 함수에 필요한 자료형을 선언하고 함수 호출 시 자료형을 지정해주어 사용
- 템플릿으로 작성 함수를 호출하는 때에 자료형에 맞는 함수를 생성하여 사용

<클래스 템플릿>
- 다양한 데이터 타입을 지원하는 클래스를 정의
- 템플릿 매개변수를 통해 클래스의 멤버변수와 멤버함수의 타입을 일반화할 수 있음
- 클래스에 필요한 자료형을 선언하고 클래스 자료형을 지정
- 템플릿으로 작성한 클래스를 호출하는 때에 자료형에 맞는 클래스를 생성하여 사용
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
// 위를 템플릿화?(함수 템플릿)

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
	cout << "데이터 : " << data << endl;
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

// 함수/정의 만들기 했을 때 자동으로 템플릿화
//template<typename T>
//void Box<T>::Print()
//{
//}