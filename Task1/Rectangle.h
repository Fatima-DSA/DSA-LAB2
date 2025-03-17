#pragma once
#include"Shape.h"
class Rectangle : public Shape {
	int Length;
	int Width;
	int Area;
public:
	Rectangle(int L, int W) :Shape(), Length(L), Width(W) {}
	void FindArea();
	
	void Display();
};
void Rectangle::FindArea() {
	Area = Length * Width;
}
void Rectangle::Display() {
	cout << "The Area Of Rectangle Become : " << Area << endl;
}