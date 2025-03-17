#pragma once
#include<iostream>
using namespace std;
class Shape {
public:
	//pure virtual Function
	virtual void FindArea() = 0;
	//constructor
	Shape();
	//Display
	virtual void Display() = 0;
};
Shape :: Shape() {
	cout << "Const Of Shape Class Called"<<endl;
}