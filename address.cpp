#include"address.h"
using namespace std;
Address::Address():House_No(" "),Area(" ")
{
	cout<<"Default ctor of add"<<endl;
}
Address::Address(string h,string a):House_No(h),Area(a)
{
	cout<<"Para ctor of add"<<endl;
}
void Address::accept()
{
	cout<<"Enter House No."<<endl;
	cin.ignore();
	getline(cin,House_No);
	cout<<"Enter Area"<<endl;
        cin.ignore();
        getline(cin,Area);
}
void Address::display()
{
	cout<<"HouseNo is"<<House_No<<endl;
	cout<<"Area is"<<Area<<endl;
}


