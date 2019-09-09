#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include<iostream>
using namespace std;

class Account
{
	protected:
		double amount;
	public:
		Account();
		void deposit();
		void withdraw();
};

#endif
