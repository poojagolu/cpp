#include"lion.h"
Lion::Lion()
{
	cout<<"ctor lion"<<endl;
}
void Lion::accept()
{
	cout<<"Enter color of lion "<<endl;
	cin>>color;
}
void Lion::display()
{
	cout<<"color of lion : "<<color<<endl;

}
