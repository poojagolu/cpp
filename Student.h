#include <iostream>
#include <cstring>
using namespace std;

class Student{
	private:
		int roll_no;
		char name[20];
		char course[10];
	public:
		Student();
		Student(int, char[], char[]);
		void accept(int, char[], char[]);
		void display();
		int getRoll_no();
};


