#include "Student.h"
#include <iostream>
#include <cstring>
using namespace std;
// Assign studentId and name
void Student::assignDetails(int studentNo, char stname[]) {
     studentId = studentNo;
     strcpy(name,stname);
}

// Display StudentId and Name
void Student::display() {
    cout << "student num : " << studentId << endl;
    cout << "student name : " << name << endl;
}
