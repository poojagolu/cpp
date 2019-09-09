
#include<cstring>
#include"mystring.h"
using namespace std;
Mystring::Mystring()
{
	size=0;
	p=new char;
	*p='\0';
}
Mystring::Mystring(char *s)
{
	size=strlen(s);
	p=new char[size+1];
	strcpy(p,s);
}
void Mystring::accept()
{
	cout<<"enter size"<<endl;
	cin>>size;
	p=new char[size+1];
	cout<<"enter string"<<endl;
	cin>>p;
}
void Mystring::display()
{
	cout<<size<<"  "<<p<<endl;

}
Mystring::~Mystring()
{	
	delete []p;
	cout<<"Memory destroyed"<<endl;
}
