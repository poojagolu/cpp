#include <iostream>
#include <cmath>
using namespace std;

double circle(double r){
	double pi = 3.1415926535897;
	return pi*r*r;
}

double rectangle(double l, double b)
{
	return l*b;
}

double square(double s){
	return s*s;
}

int main()
{
	cout << "\tMENU\n";
	cout << "1. Area of circle\n";
	cout << "2. Area of rectangle\n";
	cout << "3. Area of square\n";
	cout << "Enter your choice\n";
	int ch;
	cin >> ch;

	switch(ch)
	{
		case 1:
			cout << "Enter radius: ";
			double r;
			cin >> r;
			cout << "\n" << circle(r);
			break;
		case 2:
			cout << "Enter length and breadth: ";
                        double l,b;
			cin >> l >> b;
                        cout << rectangle(l,b);
                        break;
		case 3:
			cout << "Enter side: ";
                        double s;
			cin >> s;
                        cout <<"\n"<< square(s);
                        break;
		default:
			cout << "Invalid";
			break;
	}
	return 0;
}



