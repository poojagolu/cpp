#include"bank_account.h"

Account::Account()
{
	amount = 0.0;
}

void Account:: withdraw()
{
	float wd;
cout<<"enter the amount u want to withdraw";
cin>>wd;
amount -= wd;
}

void Account :: deposit()
{
	float dep;
	cout<<"enter the amount u want to deposit";
	cin>>dep;
	amount += dep;
}
