#include"player.h"
using namespace std;
Player::Player():name(" "),age("")
{
	cout<<"default ctor of plyr"<<endl;
}
Player::Player(string n,string a):name(n),age(a)
{
	cout<<"para ctor of plyr"<<endl;
}
void Player::accept1()
{
	cout<<"Enter name"<<endl;
	cin.ignore();
	getline(cin,name);
	cout<<"Enter age"<<endl;
	cin.ignore();
	getline(cin,age);
}
void Player::display1()
{
	cout<<"Name is "<<name<<endl;
	cout<<"age is  "<<age<<endl;

}
