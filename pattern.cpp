#include <iostream>
using namespace std;

int main()
{
	int i, j, k, h;
	for(i=0; i<5; i++)
	{
		for(j=1; j<=5-i; j++)
			cout << j << " ";
		for(k=0; k<2*i-1; k++)
			cout << " " << " ";
		for(h=j-1; h>0; h--)
		{
			if(h==5)
				continue;
			else
				cout << h << " ";
		}
		cout << "\n";
	}
	return 0;
}
