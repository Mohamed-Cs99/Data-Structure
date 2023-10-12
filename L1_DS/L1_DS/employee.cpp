#include "employee.h"

employee::employee()
{

}

void employee::readEmployeesData()
{
	cout << "Employee Name: "; cin >> name; 
	cout << "Employee Department: "; cin >> dept; 
	cout << "Employee Salary: "; cin >> salary; 
	cout << "Employee Data (day/month/year): "; cin >> d.day >> d.month >> d.year; 
}

void employee::calcRaiseInSalary()
{
	if (this->d.year >= 5)
	{
		this->salary = salary + ((20 * salary) / 100); 
	}
}

void employee::printNames(string dept)
{
	if (this->dept == dept)
	{
		cout << "Employee Name in " << dept << " is: " << name << endl; 
	}
}
