#include<iostream>
using namespace std;

// 기본 클래스 : Shape -> 추상
template<typename T>
class Shape {
public:
	virtual void Draw()const = 0;	// 순수가상함수
	virtual T area()const = 0;
};

// Circle : Shape를 상속받는 템플릿 클래스
template<typename T>
class Circle :public Shape<T> {
	T radius;
public:
	Circle(T r) :radius(r) {}

	void Draw()const override {
		cout << "원의 반지름" << radius << endl;
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
		cout << "가로 : " << width << ", 세로 : " << height << endl;
	}
	T area()const override {
		return width * height;
	}
};

template<typename T>
void DrawShape(const Shape<T>* shape){
	shape->Draw();
	cout << "면적 : " << shape->area() << endl;
}

int main() {
	Circle<double> circle(3.14);
	Rectangle<int> rectangle(4, 6);

	DrawShape(&circle);
	DrawShape(&rectangle);
}