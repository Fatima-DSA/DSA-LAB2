#pragma once
#include"Employee.h"
class HalfTime : public Employee{
	int Rate;
	int Hours;
	int Salary;
public:
	HalfTime(int R,int H);
	void CalculateSalary();
	void Display();

};
HalfTime::HalfTime(int R, int H) : Employee(), Rate(R), Hours(H) {}
void HalfTime::CalculateSalary() {
	
	Salary = Rate * Hours;

}
void HalfTime :: Display() {
	cout << "Salary Of HalfTime Become : " << Salary << endl;
}