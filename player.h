#ifndef PLAYER
#define PLAYER
#include<iostream>
#include<string>
using namespace std;
class Player
{
	private:
		string name;
		string age;
	public:
		Player();
		Player(string n,string a);
		void accept1();
		void display1();
};
#endif
