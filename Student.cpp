#include "Student.h"
using namespace std;

Student::Student()
{
	cout << "Default Constructor called\n";
	roll_no = 1;
	strcpy(name, "abc");
	strcpy(course, "English");
}

Student::Student(int r, char n[], char c[])
{
	cout << "Parameterized constructor called";
	roll_no=r;
        strcpy(name,n);
        strcpy(course,c);
}

void Student::accept(int r, char n[], char c[])
{
	roll_no=r;
	strcpy(name,n);
	strcpy(course,c);
}

void Student::display()
{
	cout << "Roll no.:" << roll_no << endl;
	cout << "Name: "<< name << endl;
	cout << "Course: " << course << endl;
}

int Student::getRoll_no() const
{
	return roll_no;
}

