#include"tiger.cpp"
#include"lion.cpp"
class Liger:public Lion,public Tiger
{
	string color;
	public:
	Liger();
	void accept1();
	void display1();
}
