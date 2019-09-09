#include "Player.h"

/*void sort(Player *p, int size)
{
	Player temp;
	for(int i=0; i<size; i++)
	{
		for(int j=0; j<size-i-1; j++)
		{
			if(p[j].Player::getAge()>p[j+1].Player::getAge())
			{
				temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;
			}
		}
	}
}
void sortname(Player *p, int size)
{
	Player temp;
        for(int i=0; i<size; i++)
        {
                for(int j=0; j<size-i-1; j++)
                {
                        if(p[j].Player::getName()>p[j+1].Player::getName())
                        {
                                temp = p[j];
                                p[j] = p[j+1];
                                p[j+1] = temp;
                        }
                }
        }

}*/

Player::Player():name("abc"),age("20"),country("india")
{}

Player::Player(string n, string a, string c):name(n), age(a), country(c)
{}

void Player::accept()
{
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter age: ";
	cin >> age;
	cout << "Enter country: ";
	cin >> country;
}

void Player::file_write()
{
	ofstream fout("player.txt", ios::out | ios::app);
	fout << name << "\n";
	fout << age << "\n";
	fout << country << "\n";
	fout << "\n";
}

void Player::file_read()
{
	string s;
	ifstream fin("player.txt", ios::in);
	while(!fin.eof())
	{
		getline(fin,s);
		cout << s << endl;
	}
	
}
/*void Player::display()
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Country:" << country << endl;
}*/

/*int Player::getAge()
{
	return age;
}

string Player::getName()
{
	return name;
}*/
