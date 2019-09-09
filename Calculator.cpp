#include <iostream>
using namespace std;

class Calculator
{
	public:
		int add(int x, int y)
		{
			return x+y;
		}
		int subtract(int x, int y)
		{
			return x-y;
		}
		int multiply(int x, int y)
		{
			return x*y;
		}
		int divide(int x, int y)
		{
			if(y==0){
				cout << "Indeterminate value";
				return -1;
			}
			else
				return x/y;
		}

};

int main()
{
	Calculator c;
	int ch, x, y, res;
	char a = 'y';
	cout << "MENU\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division";
	while(a=='y' || a =='Y')
	{
		cout << "Enter your choice: ";
		cin >> ch;
		switch(ch){
			case 1:
				cout << "Enter values: ";
				cin >> x >> y;
				res = c.add(x,y);
				cout << "Sum: " <<res << endl;
				break;
			case 2:
                                cout << "Enter values: ";
                                cin >> x >> y;
                                res = c.subtract(x,y);
				cout << "Difference: " << res << endl;
                                break;
			case 3:
                                cout << "Enter values: ";
                                cin >> x >> y;
                                res = c.multiply(x,y);
				cout << "Product: " << res << endl;
                                break;
			case 4:
                                cout << "Enter values: ";
                                cin >> x >> y;
                                res = c.divide(x,y);
				cout << "Quotient: " << res << endl;
                                break;
			default:
				cout << "Invalid Choice. Please enter again.";
				break;
		}
		cout << "Do you want to continue?(y/n)";
		cin >> a;
	}
	return 0;
}

