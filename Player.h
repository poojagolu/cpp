#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Player
{
	string name;
	string age;
	string country;
	
	public:
		Player();
		Player(string, string, string);
		void accept();
		void file_write();
		void file_read();
		//void display();
		//int getAge();
		//string getName();

};
