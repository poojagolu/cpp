#include"Student.h"
using namespace std;
int main()
{
	int roll,r;
	char name[20], course[10];
	Student s1;
	s1.display();
	char a[10]="Pratibha";
	char b[10]="PG-DAC";
	Student s2(0,a,b);
	s2.display();
	Student *s3=new Student[5];
	for(int i=0;i<3;i++)
	{
			cout<<"Enter rollno : ";
			cin>>roll;
			cout<<"\n Enter your name : ";
			cin.ignore();
			cin.getline(name,20);
			cout<<"\n Enter your course : ";
                	cin.ignore();
                	cin.getline(course,20);
			s3[i].accept(roll,name,course);
			s3[i].display();
	}
	cout<<"Enter any rollno : ";
	cin>>r;
	for(int i=0;i<3;i++)
	{
		if(r==s3[i].getRoll_no())
		{
			s3[i].display();
		}
	
	}
	return 0;

}
