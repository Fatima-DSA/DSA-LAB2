#pragma once
#include<iostream>
using namespace std;
class Employee {
public:
	Employee();
	virtual void CalculateSalary() = 0;
};
Employee :: Employee() {
	cout << "The Const Of Employee called " << endl;
}