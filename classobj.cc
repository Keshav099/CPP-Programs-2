#include<iostream>
using namespace std;

class box
{
	int l,w,h;
	public:
	void get()
	{
		cout<<"Enter Length, Width, Height:"<<endl;
		cin>>l>>w>>h;
	}
	void show()
	{
		cout<<"Length:"<<l<<endl;
		cout<<"Width:"<<w<<endl;
		cout<<"Height:"<<h<<endl;
	}
}ob1;

int main()
{
	box ob2;
	ob1.get();
	ob1.show();
	ob2.get();
	ob2.show();
	return 0;
}
