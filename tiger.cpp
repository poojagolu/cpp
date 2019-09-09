#include"tiger.h"
Tiger::Tiger()
{
        cout<<"ctor Tiger"<<endl;
}
void Tiger::accept()
{
        cout<<"Enter color of Tiger "<<endl;
        cin>>color;
}
void Tiger::display()
{
        cout<<"color of tiger : "<<color<<endl;

}
   
