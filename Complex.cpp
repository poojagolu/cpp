#include "Complex.h"
using namespace std;

Complex::Complex()
{
	real=0;
	img=0;
}

void Complex::accept(int r, int i)
{
	real=r;
	img=i;
}

void Complex::display()
{
	cout << "Real: " << real << endl;
	cout << "Imaginary: "<< img << endl;
}

int Complex::getReal()
{
	return real;
}
