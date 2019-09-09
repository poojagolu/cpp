#include"staticCtor.h"
using namespace std;
MyArray::MyArray(int s)
{
	size=s;
	p=new int[size];
}
void MyArray::setData(int index,int value)
{
	p[index]=value;
}
int MyArray::getI(int index)
{
	return p[index];
}
MyArray::~MyArray()
{
	delete []p;
}
