#include <iostream>
using namespace std;

int *mult(int a[], int size)
{
	for(int i=0; i<size; i++)
	{
		a[i]*=2;
	}
	return a;
}

int main()
{
	int n, arr[20];
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter values:\n ";
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	mult(arr,n);
	cout <<"New array: ";
	for(int i=0; i<n; i++)
        {
                cout << arr[i] << " ";
        }
	return 0;
}





