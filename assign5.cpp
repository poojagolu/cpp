#include <iostream>
using namespace std;

int sum(int n)
{
	int x;
	if(n==0)
		return 0;
	else
	{
		cout << "Enter value: ";
		cin >> x;

		return x+sum(n-1);
	}
}

int main()
{
	int n, i=0;
	cout << "Enter n: ";
	cin >> n;
	while(i<n)
	{
		int s = sum(n);
		cout << "Sum: " << s;
	}
	return 0;
}
