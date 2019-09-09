#include<iostream>
#include <cstring>
using namespace std;
class Employee
{
        private:
                int empid;
                char name[20];
                float sal;
        public:
                Employee()
                {
                        empid=0;
                        strcpy(name, "xyz");
                        sal=0.0;
                }
                Employee(int id,char ename[],float salary)
                {
                        empid=id;
                        strcpy(name,ename);
                        sal=salary;
                }
                void accept(int id ,char ename[],float salary)
                {
                        empid=id;
                        strcpy(name, ename);
                        sal=salary;

                }
                void display()
                {
                        cout<<"Employee id :"<<empid<<endl;
                        cout<<"Employee name :"<<name<<endl;
                        cout<<"Employee salary :"<<sal<<endl;

                }

};

int main()
{
        int id;
        char name[20];
        float salary;
        Employee e1,e3;
        cout << "CONSTRUCTOR\n";
        e1.display();
	char a[] = "abc";
        Employee e2(101,a,30000.0);
        cout << "\nPARAMETERIZED CONSTRUCTOR\n";
        e2.display();
        cout << "Enter employee id: ";
        cin >> id;
        cout << "Enter employee name: ";
	cin.ignore();
        cin.getline(name,20);
        cout << "\nEnter employee salary: ";
        cin >> salary;
        e3.accept(id, name, salary);
        cout << "From accept()\n";
        e3.display();
        return 0;

}
