#include <iostream>
using namespace std;


int main()
{
	char a[100], b[100];
	int n;
	cout << "Enter a string: ";
	cin.get(a,100);
	n = sizeof(a)/sizeof(a[0]);
	cout << "Original string: ";
        cout << a << endl; 	
	for(int i=0; i<n; i++)
	{
		if(islower(a[i]))
			a[i] = toupper(a[i]);
		else if(isupper(a[i]))
			a[i] = tolower(a[i]);
		else 
			a[i] = a[i];
	}
	cout << "New string:";
	cout << a << endl;
	return 0;
}
