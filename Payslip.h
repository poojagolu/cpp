#include<iostream>
#include<string>
using namespace std;
class Payslip
{
	private:
		int EmpNo;
		string EmpName;
		float DA;
		float HRA;
		float BasicSalary;
		float salary;
	public:
		Payslip();
		Payslip(int,string,float,float,float,float);
		void accept();
		void display();
		void calSalary();

};
