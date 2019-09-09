#include"cktplayer.h"
using namespace std;
CktPlayer::CktPlayer():run(0)
{
	cout<<"default ctor of cktplyr"<<endl;
}
CktPlayer::CktPlayer(int r):run(r)
{
	cout<<"para ctor of cktplyr"<<endl;
}
void CktPlayer::accept()
{  
	cout<<"Enter run :"<<endl;
	cin>>run;
}
void CktPlayer::display()
{
	cout<<"Run ="<<endl;
}
