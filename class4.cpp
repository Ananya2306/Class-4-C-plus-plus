#include<iostream>
using namespace std;

class Gambit
{
	public:
		Gambit()
		{
			cout<<"Hello there im in constructor "<<endl;
		}
		~Gambit()
		{
			cout<<"Hello there im in destructor "<<endl;
		}
		void display()
		{
			cout<<"Hello! "<<endl;
		}
};

int main()
{
	Gambit gam;
	gam.display();
	
	return 0;
}
