#include<iostream>
using namespace std;
template<class T>
void Myswap(T &x,T &y)
{
	T temp=x;
	x=y;
	y=temp;
}
int main()
{
	int a=10,b=20;
	Myswap(a,b);
	cout<<"\n"<<a<<"\n"<<b;
	float p=10.10,q=11.11;
	Myswap(p,q);
	cout<<"\n"<<p<<"\n"<<q;
	return 0;
}

