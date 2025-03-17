#include"FullTime.h"
#include"HalfTime.h"
int main() {
	FullTime Obj(5000);
	HalfTime Obj1(2000, 4);

	Obj.CalculateSalary();
	cout << endl;
	Obj1.CalculateSalary();
	Obj1.Display();

	return 0;
}