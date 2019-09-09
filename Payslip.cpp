#include"Payslip.h"
using namespace std;
Payslip::Payslip():EmpNo(0),EmpName(" "),DA(0.0),HRA(0.0),BasicSalary(0.0),salary(0.0)
{
	cout<<"Default Ctor of Payslip"<<endl;
}
Payslip::Payslip(int eno,string ename,float d,float h,float bs,float s)
{
	EmpNo=eno;
	EmpName=ename;
	DA=d;
	HRA=h;
	BasicSalary=bs;
	salary=s;
	cout<<"Parameterized Ctor of Payslip"<<endl;
}
void Payslip::accept()
{
	cout<<"Enter Employee No. : "<<endl;
	cin>>EmpNo;
	cout<<"Enter Employee Name : "<<endl;
	cin>>EmpName;
	cout<<"Enter Basic Salary  : "<<endl;
	cin>>BasicSalary;
}
void Payslip::calSalary()
{
	if(BasicSalary<1500)
	{
		HRA=0.1*BasicSalary;
		DA=0.9*BasicSalary;
	}
	else
	{
		HRA=500;
		DA=0.98*BasicSalary;
	}
	salary=BasicSalary+HRA+DA;
}
void Payslip::display()
{
	cout<<"Employee Number is : "<<EmpNo<<endl;
	cout<<" Employee Name is : "<<EmpName<<endl;
	cout<<"Basic salary : "<<BasicSalary<<endl;
	cout<<"Gross Salary : "<<salary<<endl;

}
