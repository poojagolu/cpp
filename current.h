#include"bank_account.h"

class Current: public Account
{
	float ir = 0.055;

        public:

        void calinterest();
        void displaybal();


};


