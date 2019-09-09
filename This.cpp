#include<iostream>
using namespace std;
class Complex
{
	private:
		int real;
		int img;
	public:
		Complex(): real(0), img(0)
                {
                }
                Complex(int i, int j):real(i), img(j){}
                void accept()
                {
			cout<<"Add of caller"<<this<<endl;
                        cout<<"enter real value"<<endl;
                        cin>>real;
                        cout<<"enter img value"<<endl;
                        cin>>img;
                }
                void display()
                {
                        cout<<"real part="<<this->real<<endl;
                        cout<<"img  part="<<this->img<<endl;

                }
};
int main()
{
	Complex c;
	cout<<"Add of c : "<<&c<<endl;
	c.accept();
	c.display();
	return 0;
}
