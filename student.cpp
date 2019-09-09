#include"student.h"
using namespace std;
Student::Student():name(" ")
{
	cout<<"default ctor of stud"<<endl;
}
Student::Student(string a):name(a)
{
	 cout<<"para ctor of stud"<<endl;

}
void Student::accept()
        {
                cout<<"Enter name :"<<endl;
                cin>>name;
                a.accept();
        }
void Student::display()
        {
                cout<<"Name ="<<name<<endl;
                a.display();
        }

