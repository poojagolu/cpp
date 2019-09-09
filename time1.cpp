#include"time1.h"
#include<cstdlib>
using namespace std;
Time1::Time1():hrs(0),min(0),sec(0)
{
	cout<<"Default Ctor...."<<endl;
}
Time1::Time1(int h,int m,int s):hrs(h),min(m),sec(s)
{
	cout<<"Parameterized ctor......."<<endl;
}
void Time1::display()
{
	cout<<hrs;
	cout<<"hour : ";
	cout<<min;
	cout<<"min : ";
	cout<<sec;
	cout<<"secs";
	cout<<endl;
}
void Time1::accept()
{
	cout<<"Enter hour : ";
	cin>>hrs;
	while(hrs>24)
	{
		if(hrs<=24)
		{}
		else
		{
		cout<<"Out of range Enter again..."<<endl;
		cout<<"Enter hour :";
		cin>>hrs;
		}
	}
	cout<<"Enter min : ";
        cin>>min;
	while(min>60)
        {
                if(min<=60)
                {}
                else
                {
                cout<<"Out of range Enter again..."<<endl;
                cout<<"Enter min :";
                cin>>min;
                }
        }

	cout<<"Enter sec : ";
        cin>>sec;
	while(sec>60)
        {
                if(sec<=60)
                {}
                else
                {
                cout<<"Out of range Enter again..."<<endl;
                cout<<"Enter sec :";
                cin>>sec;
                }
        }

	cout<<endl;

}
Time1 Time1::cmp(Time1 t2)
{
	{
		if(hrs==t2.hrs && min==t2.min && sec==t2.sec)
		cout<<"Compared or same "<<endl;
		else
		cout<<"Not same"<<endl;
	}
		
}
Time1 Time1::operator-(Time1 t2)
{
	Time1 t3;
	if(t2.sec<sec)
	{
		t2.min--;
		t2.sec+=60;
	}
	t3.sec=t2.sec-sec;
	if(t2.min<min)
	{
		t2.hrs--;
		t2.min+=60;
	}
	t3.min=t2.min-min;
	t3.hrs=t2.hrs-hrs;
	cout<<endl;
	cout<<"Diff is by  "<<abs(t3.hrs);
	cout<<"  hrs  "<<abs(t3.min);
	cout<<"  mins  "<<abs(t3.sec);
	cout<<"  sec  ";
	cout<<endl;

}
