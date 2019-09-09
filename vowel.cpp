
#include <iostream>
using namespace std;

int vowel(char a[], int n){
	int count=0;
	for(int i=0; i<n; i++)
	{
		if(a[i]=='a' || a[i]=='A' || a[i]=='e' || a[i]=='E' ||a[i]=='i' || a[i]=='I' ||a[i]=='o' || a[i]=='O' ||a[i]=='u' || a[i]=='U' )
			count++;
	}
	return count;
}

int main()
{
	char a[20];
	int size;
	cout << "Enter a string: ";
	cin.get(a,20);
	size = sizeof(a)/sizeof(a[0]);
	//cout << size << endl;
	cout << "No. of vowels are: " << vowel(a,size)<< endl;
	return 0;
}


