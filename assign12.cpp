#include <iostream>
using namespace std;

int max(int a[], int n)
{
	int m=0;
	for(int i=0; i<n; i++)
	{
		if(a[i]>m)
			m=a[i];
	}
	return m;
}

int sec_max(int a[], int n, int m)
{
	int sm = 0;
	for(int i=0; i<n; i++)
	{
		if(a[i]>sm && a[i]<m)
			sm=a[i];
	}
	return sm;
}

int min(int a[], int n)
{
        int m=a[0];
        for(int i=0; i<n; i++)
        {
                if(a[i]<m)
                        m=a[i];
        }
        return m;
}


int sec_min(int a[], int n, int m)
{
        int sm = a[0];
        for(int i=0; i<n; i++)
        {
                if(a[i]<sm && a[i]>m)
                        sm=a[i];
        }
        return sm;
}

int main()
{
	int n, m, mn, arr[20];
	cout << "Enter n: ";
	cin >> n;
	cout << "Enter values:";
	for(int i=0; i<n; i++)
		cin >> arr[i];
	m = max(arr,n);
	mn = min(arr,n);
	cout << "Maximum value: " << m << endl;
	cout << "Minimum value: " << mn << endl;
	cout << "Second maximum value: " << sec_max(arr, n, m) << endl;
	cout << "Second minimum value: " << sec_min(arr, n, mn) << endl;
	return 0;
}



