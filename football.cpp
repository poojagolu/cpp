#include"football.h"
using namespace std;
Football::Football():goal(0)
{}
Football::Football(int g):goal(g)
{}
void Football::accept()
{
	cout<<"Enter goal : "<<endl;
	cin>>goal;
}
void Football::display()
{
	cout<<"Goal="<<goal<<endl;
}
