
#include <iostream>
using namespace std;
int avg(int arr[],int n)
{
	float sum=0.0;
	float a;
	for(int j=0;j<n;j++)
	{
		sum=sum+arr[j];
	}
	a=sum/n;
	return a;

}
int main()
{
	int arr[10],n;
	float c;
	cout << "Enter no of ele for array:"<<endl;
	cin>>n;
	cout<<"enter values for array"<<endl;
	for(int i=0;i<n;i++ )
	{
		cin>>arr[i];
	}
	c=avg(arr,n);
	cout<<"average="<<c;
	return 0;
}
	

