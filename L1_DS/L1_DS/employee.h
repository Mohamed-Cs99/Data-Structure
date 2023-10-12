#include <iostream>
using namespace std; 

struct date
{
	int day, month, year; 
};
class employee
{
private:
	string name; 
	string dept; 
	double salary; 
	date d; 

public:
	employee(); // constructor
	void readEmployeesData(); 
	void calcRaiseInSalary(); 
	void printNames(string ); 
};