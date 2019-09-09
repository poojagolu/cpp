#include<iostream>
using namespace std;
class MyArray
{
	private:
		int size;
		int *p;
	public:
		MyArray(int);
		void setData(int,int);
		int getI(int);
		~MyArray();
};
