#include <iostream>
using namespace std;

int main()
{
	int n,i;
        char a[20]; 
	cout<< "Enter number of characters: ";
	cin >> n;
	cout << "\nEnter characters:";
	for(i=0; i<n; i++)
	{
		cin >> a[i];
	}
	a[i]='\0';
	cout << "String: "<< a << endl;
	return 0;
}
