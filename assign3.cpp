
#include <iostream>
using namespace std;
int fibonacci(int n)
{
	if(n==1 || n==0)
		return n;
	else
		return (fibonacci(n-1)+fibonacci(n-2));

}

int main()
{
	cout << "Enter a number: ";
	int n, i=0;
	cin >> n;
	cout << "Fibonacci Series: \n";
	while(i<n)
	{
		cout << fibonacci(i)<< " ";
		i++;
	
	}
	cout << endl;
	return 0;
}
