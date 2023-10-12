#pragma once
#include<iostream>
using namespace std; 
class stud
{
private:
    int id;
    double marks[3], total;

public:
    stud(); 
    stud(int); 
    void readStudentData(); 
    void calcTotalMarks(); 
    void displayData(); 

};

