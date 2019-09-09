#include<iostream>
using namespace std;
class Date
{
	private:
		int dd,mm,yyyy;
	public:
		Date();
		Date(int,int,int);
		void accept();
		void display();
		Date diff(Date);
		Date cmp(Date);
};
