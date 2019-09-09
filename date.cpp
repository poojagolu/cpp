#include"date.h"
#include<cstdlib>
using namespace std;
Date::Date():dd(0),mm(0),yyyy(0)
{}
Date::Date(int d,int m,int y):dd(d),mm(m),yyyy(y)
{}
void Date::accept()
{
	int flag;
	cout<<"Enter year : "<<endl;
        cin>>yyyy;
	do
	{
		if(yyyy>999&&yyyy<=9999)
		{
			if(yyyy%4==0||yyyy%16==0)
			{
				cout<<"Its a Leap Year : "<<endl;
				flag=1;
			}
			else
			{
				cout<<"Non Leap Year"<<endl;
			}
		}
		else
		{
			cout<<"Year must in format of YYYY : ";
			cin>>yyyy;

		}
	}while(yyyy<=999||yyyy>9999);
	cout<<"Enter month : "<<endl;
        cin>>mm;
	do
	{
		if(mm<=12&&mm>0);
		else
		{
			cout<<"Enter month again :";
			cin>>mm;
		}
	}while(mm>12||mm<0);
	cout<<"Enter Date : "<<endl;
	cin>>dd;
	if(mm==2)
	{
		if(flag==1)
		{
			do
			{
				if(dd<=29);
				else
				{
					cout<<"Enter date again : "<<endl;
					cin>>dd;
				}
			}while(dd>29||dd<0);
		}
		else
		{
			do
                        {
                                if(dd<=28);
                                else
                                {
                                        cout<<"Enter date again : "<<endl;
                                        cin>>dd;
                                }
                        }while(dd>28);

		}
	}
	else
	{
	 	do
                {
                        if(dd<=31)
			{
				if(mm==4||mm==6||mm==9||mm==11)
				{
					do
					{
						if(dd<=30);
						else
						{
							cout<<"Enter date again : "<<endl;
							cin>>dd;
						}
					}while(dd>30);
				}

			}
                        else
                        {
                            cout<<"Enter date again : "<<endl;
                            cin>>dd;
                        }
               }while(dd>31);
	}
}
void Date::display()
{
	cout<<"Date is : "<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
}
Date Date::cmp(Date d)
{
	if(dd==d.dd&&mm==d.mm&&yyyy==d.yyyy)
		cout<<"Compared"<<endl;
	else
		cout<<"Not Compared"<<endl;
}
Date Date::diff(Date d)
{
	Date d1;
	d1.dd=dd-d.dd;
	d1.mm=mm-d.mm;
	d1.yyyy=yyyy-d.yyyy;
	cout<<"Diff is By : "<<abs(d1.dd)<<" days  "<<abs(d1.mm)<<" month  "<<abs(d1.yyyy)<<" years "<<endl;
}

