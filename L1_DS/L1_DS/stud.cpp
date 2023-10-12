#include "stud.h"
stud::stud()
{
	total = 0; 
}
stud::stud(int id)
{
	this->id = id; 
}

void stud::readStudentData()
{
    cout << "ID: "; cin >> id;
    for (int i = 0; i < 3; i++)
    {
        cout << "Subject " << i << ": ";
        cin >> marks[i];
    }
}

void stud::calcTotalMarks()
{
    for (int i = 0; i < 3; i++)
    {
        total += marks[i];
    }

}

void stud::displayData()
{
    cout << "ID = " << id << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Subject " << (i + 1) << " Mark = " << marks[i] << endl;
    }
    cout << "Total Marks = " << total << endl; 

    cout << endl; 
}