#include <iostream>
using namespace std;

class Complex
{
	private:
		int real;
		int img;
	public:
        	Complex();
        	Complex(int, int);
        	void accept(int, int);
        	void display();
        	int getReal();

};

