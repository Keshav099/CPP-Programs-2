#include<iostream>
using namespace std;

class base
{
	public:
		virtual void print()
		{
			cout<<"Print Base class"<<endl;
		}
		void show()
		{
			cout<<"Show Base class"<<endl;
		}
};

class derived:public base
{
	public:
		void print()
		{
			cout<<"Print Derived Class"<<endl;
		}
		void show()
		{
			cout<<"Show derived class"<<endl;
		}		
};

int main()
{
	base *bptr;
	derived d;
	bptr=&d;
	bptr->print();
	bptr->show();
	return 0;
}

