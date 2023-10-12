#include "employee.h"

int main()
{
    int nOfemps; 
    cout << "Enter number of employees: "; cin >> nOfemps; 

    employee* emps = new employee[nOfemps]; 

    for (int i = 0; i < nOfemps; i++)
    {
        emps[i].readEmployeesData(); 
        emps[i].calcRaiseInSalary(); 
    }
    cout << "Ente dept You want to get it's employees: "; string dept; cin >> dept; 
    for (int i = 0; i < nOfemps; i++)
    {
        emps[i].printNames(dept); 
    }

    return 0; 
}


