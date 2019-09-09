#include"current.h"


void Current :: calinterest()
{
        amount = amount + (ir*amount);
}

void Current :: displaybal()
{
        cout << "Total balance: " << amount << endl;
}                                                                                                                                                                                             

