#include"Account.h"
void Account::deposit()
{
	int n;
	cout<<"Enter your choice for deposit : "<<endl;
	cout<<"1.From Saving Account \n2. From Current Account "<<endl;
	cin>>n;
	switch(n)
	{
		case 1:
			s.deposit();
			break;
		case 2:
			c.deposit();
			break;
		default:
			cout<<"Wrong choice"<<endl;
	}
}
void Account::withdraw()
{
        int n;
        cout<<"Enter your choice for withdraw : "<<endl;
        cout<<"1.From Saving Account \n2. From Current Account "<<endl;
        cin>>n;
        switch(n)
        {
                case 1:
                        s.withdraw();
                        break;
                case 2:
                        c.withdraw();
                        break;
                default:
                        cout<<"Wrong choice"<<endl;
        }
}

