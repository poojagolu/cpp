#include<iostream>
#include<string>
using namespace std;
class Address
{
	private:
		string House_No;
		string Colony;
		string Area;
		string City;
		string Pincode;
	public:
		Address();
		Address(string,string,string,string,string);
		void accept();
		void display();
		int operator==(Address);
};
