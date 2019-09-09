#include<iostream>
#include<string>
using namespace std;

class Mobile
{
	string modelno;
	float price;
	string manufacturer;
	int quan;
	public:

	Mobile();
	Mobile(string, float, string, int);
	void accept();
	void display();
	string getModel();
	int getQty();

};
