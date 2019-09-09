#include"Address.h"
using namespace std;
Address::Address():House_No(" "),Colony(" "),Area(" "),City(" "),Pincode(" ")
{}
Address::Address(string a,string b,string c,string d,string e):House_No(a),Colony(b),Area(c),City(d),Pincode(e)
{}
void Address::accept()
{
	cout<<"Enter House no : "<<endl;
	cin>>House_No;
	cout<<"Colony : "<<endl;
        cin>>Colony;
	cout<<"Area : "<<endl;
        cin>>Area;
	cout<<"City : "<<endl;
        cin>>City;
	cout<<"Pincode : "<<endl;
        cin>>Pincode;
}
void Address::display()
{
	cout<<"Address is : "<<endl;
	cout<<House_No<<" "<<Colony<<" "<<Area<<" "<<City<<" "<<Pincode<<endl;
}
int Address::operator==(Address a1)
{
	if(a1.Pincode==Pincode)
	{
		if(a1.City==City)
		{
			if(a1.Area==Area)
			{
				if(a1.Colony==Colony)
				{
					if(a1.House_No==House_No)
						return 1;
					else
						return 0;
				}
				else return 0;
			}
			else return 0;
		}
		else return 0;
	}
	else return 0;
}

