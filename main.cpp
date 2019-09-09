#include"time1.h"
using namespace std;
int main()
{
	Time1 t1;
	t1.display();
	Time1 t2(3,45,43);
	t2.display();
	Time1 t3,t4;
	t3.accept();
	t4.accept();
	t4.cmp(t3);
	t4.operator-(t3);
	return 0;

}
