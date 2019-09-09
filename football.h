#include"player.h"
using namespace std;
class Football:public Player
{
	int goal;
	public:
	Football();
	Football(int);
	void accept();
	void display();
};
