
#include <iostream>
using namespace std;

int bin(int n)
{
	if(n==0)
		return 0;
	else
		return n%2 + 10 * bin(n/2);
}

int main()
{
	int n;
	cout << "Enter a decimal number: ";
	cin >> n;
	cout << "Binary value: "<< bin(n)<< endl;
	return 0;
}

