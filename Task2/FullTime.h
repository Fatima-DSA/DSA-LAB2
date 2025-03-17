#pragma once
#include"Employee.h"
class FullTime : public Employee {
	double Salary;
public:
	FullTime(int S);
	void CalculateSalary();
};
FullTime :: FullTime(int S):Employee(),Salary(S){}
void FullTime::CalculateSalary() {
	cout << "The Salary For Every FullTime Employee is : " << Salary << endl;
}