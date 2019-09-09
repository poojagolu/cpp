#include"Mobile.h"
 Mobile::Mobile():modelno(""), price(0.0), manufacturer(""), quan(0)
{}

Mobile::Mobile(string m, float p, string m1, int q )
{
	modelno = m;
	price = p;
	manufacturer = m1;
	quan = q;
}

void Mobile::accept()
{
	cout<<"ENter the model no\n";
	cin>>modelno;
	cout<<"ENter the price\n";
        cin>>price;
        cout<<"ENter the manufacturer\n";
        cin>>manufacturer;
        cout<<"ENter the quantity\n";
        cin>>quan;

}
void Mobile:: display()
{
        cout<<"The model no. is \n"<<modelno<<endl;
	cout<<"The price is \n"<<price<<endl;
        cout<<"The manufacturer is \n"<<manufacturer<<endl;
        cout<<"The quantity is \n"<<quan<<endl;
}

string Mobile::getModel()
{
	return modelno;
}

int Mobile::getQty()
{
	return quan;
}
