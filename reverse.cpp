#include<iostream>
using namespace std;

void print(int a[], int n)
{
	for(int i=0;i<n;i++)
        {
                cout << a[i] << " ";
        }
        cout << "\n";
}
int main()
{
	int a[10], b[10], n;
	cout<<"Enter size of array: ";
	cin>>n;
	cout<<"Enter values:\n";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Values of array A:\n";
	print(a, n);
	int i, j;
	for(i=0, j=n-1; i<n, j>=0; i++, j--)
	{
		b[i] = a[j];
	}
	cout<<"Values of array B:\n";
        print(b,n);
	return 0;

}

