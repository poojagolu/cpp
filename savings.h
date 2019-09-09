#include"bank_account.h"

class Savings: public Account
{
	float ir = 0.04;
	//float totalbal;

	public:

	void calinterest();
	void displaybal();


};

