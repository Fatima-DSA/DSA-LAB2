#pragma once
#include"Shape.h"
class Circle : public Shape {
	int Area;
	int Radius;
public:
	Circle(int R) :Shape(), Radius(R) {
		cout << "Circle Class Const Called" << endl;
	}
	void FindArea();
	void Display();
};
void Circle::FindArea() {
	Area = 3.14 * Radius * Radius;
}
void Circle::Display() {
	cout << "The Area Of Circle Become : " << Area << endl;
}
