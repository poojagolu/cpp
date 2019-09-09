#include"player.h"
using namespace std;
class CktPlayer:public Player
{
	int run;
	public:
	CktPlayer();
	CktPlayer(int);
	void accept();
	void display();
};
