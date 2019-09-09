#include <iostream>
using namespace std;

void prime(int a, int b)
{
	int flag;
	for(int i=a; i<=b; i++)
	{
		flag=0;
		for(int j=2; j<=i/2; j++)
		{
			if(i%j==0)
				flag++;
		}
		if(flag==0 && i!=1)
			cout << i << " ";
	}
	cout << "\n";
}

int main()
{
	int a, b;
	cout << "Enter a and b: ";
	cin >> a >> b;
	prime(a,b);
	return 0;
}

