#include<iostream>
#include"Saving.h"
#include"Current.h"
using namespace std;
class Account
{
	Saving s;
	Current c;
	float totalBal;
	public:
	void deposit();
	void withdraw();
};
