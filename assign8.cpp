#include <iostream>
using namespace std;

int bubble_sort(int a[], int n){
	int temp;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

int main(){
	int n, a[20];
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter elements: "; 
	for(int i=0; i<n; i++)
	{
		cin >> a[i];
	}
	cout << "\nUnsorted array:\n";
	for(int i=0; i<n; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n";
	bubble_sort(a,n);
	cout << "\nSorted array:\n";
        for(int i=0; i<n; i++)
        {
                cout << a[i] << " ";
        }
        cout << "\n"; 
	return 0;
}	

