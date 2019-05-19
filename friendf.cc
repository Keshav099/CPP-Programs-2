#include<iostream>
using namespace std;

class demo
{
	int a,b;
	public:
	friend void show(demo d);
	void get()
	{
		cout<<"Enter value of A & B:"<<endl;
		cin>>a>>b;
	}
};

void show(demo d)
{
	int mean;
	cout<<"Mean:"<<(d.a+d.b)*0.5;
}

int main()
{
	demo d1;
	d1.get();
	show(d1);
	return 0;
}
