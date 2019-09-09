
#include "savings.h"

void Savings :: calinterest()
{
	amount = amount + (ir*amount);
}	

void Savings:: displaybal()
{ 
    	cout << "Total balance: " << amount << endl;
}
