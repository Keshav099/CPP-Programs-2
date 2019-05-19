#include<iostream>
using namespace std;

void swap(int a, int b)
{
	int temp=a;
	a=b;
	b=temp;
	cout<<"new value of A: "<<a<<" and B: "<<b<<endl;
}

int main()
{
	int a=10, b=20;
	cout<<"Value of A: "<<a<<" and B: "<<b<<endl;
	swap(a,b);
	return 0;
}

