#include<iostream>
using namespace std;

// �⺻ Ŭ���� : Shape -> �߻�
template<typename T>
class Shape {
public:
	virtual void Draw()const = 0;	// ���������Լ�
	virtual T area()const = 0;
};

// Circle : Shape�� ��ӹ޴� ���ø� Ŭ����
template<typename T>
class Circle :public Shape<T> {
	T radius;
public:
	Circle(T r) :radius(r) {}

	void Draw()const override {
		cout << "���� ������" << radius << endl;
	}
	T area()const override {
		return 3.14 * radius * radius;
	}
};

template<typename T>
class Rectangle :public Shape<T> {
	T width;
	T height;
public:
	Rectangle(T w, T h) :width(w), height(h) {}
	void Draw()const override {
		cout << "���� : " << width << ", ���� : " << height << endl;
	}
	T area()const override {
		return width * height;
	}
};

template<typename T>
void DrawShape(const Shape<T>* shape){
	shape->Draw();
	cout << "���� : " << shape->area() << endl;
}

int main() {
	Circle<double> circle(3.14);
	Rectangle<int> rectangle(4, 6);

	DrawShape(&circle);
	DrawShape(&rectangle);
}