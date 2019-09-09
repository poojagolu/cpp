#include<iostream>
using namespace std;
class Mystring
{
	private:
	int size;
	char *p;
	public:
	Mystring();
	Mystring(char *);
	void accept();
	void display();
	~Mystring();
};
