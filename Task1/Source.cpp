#include"Circle.h"
#include"Rectangle.h"
int main() {
	Circle Obj(3);
	Obj.FindArea();
	Obj.Display();

	cout << endl;

	Rectangle Obj1(3, 3);
	Obj.FindArea();
	Obj1.Display();

	cout << endl;
	return 0;
}