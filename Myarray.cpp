#include<iostream>
using namespace std;
template<class T>
class Myarray
{
	private:
		int size;
		T *p;
	public:
		Myarray(int s):size(s),p(new T[size])
		{}
		Myarray(const Myarray &x)
		{
			this->size=x.size;
			this->p=new T[size];
			for(int i=0;i<size;i++)
			{
				p[i]=x.p[i];
			}
		}
		int& At(int index)
		{
			return p[index];
		}
		~Myarray()
		{
			delete []p;
		}
		void accept()
		{
			cout<<"Enter values : "<<endl;
			for(int i=0;i<size;i++)
			{
				cin>>p[i];
			}
		}
		void display()
                {
                        cout<<"Values : "<<endl;
                        for(int i=0;i<size;i++)
                        {
			cout<<p[i]<<endl;
                        }
                }

};
int main()
{
	Myarray<int> a(3);
	Myarray<float> b(3);
	Myarray<char> c(3);
	a.At(0)=100;
	cout<<a.At(0);
	a.accept();
	a.display();
	b.accept();
        b.display();
	c.accept();
        c.display();
	return 0;
}
