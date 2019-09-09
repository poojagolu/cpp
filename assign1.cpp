#include <iostream>
using namespace std;

int sum_of_digits(int n)
{
	int sum=0;
	while(n>0){
		sum+=n%10;
		n=n/10;
	}
	return sum;
}

int main()
{
	int n;
	cout << "Enter a 4-digit number: ";
	cin >> n;
	cout << "\n"<< sum_of_digits(n);
	return 0;
}

