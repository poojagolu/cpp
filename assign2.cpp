#include <iostream>
#include <cmath>
using namespace std;

void roots(float a, float b, float c)
{
	float x1, x2;
	x1 = (-b + sqrt(b*b-4.0*a*c))/2.0*a;
	x2 = (-b - sqrt(b*b-4.0*a*c))/2.0*a;
	cout << "Roots are: "<<x1 <<" " <<x2;
}

int main(){
	cout << "Enter the coefficients: ";
	float a,b,c;
	cin >> a >> b >> c;
	roots(a,b,c);
}
