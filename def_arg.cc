#include<iostream>
using namespace std;

int sum(int a=0, int b=0, int c=0)
{
	return (a+b+c);
}

int main()
{
	int a=10, b=20, c=30;
	cout<<"Sum of "<< a << b <<" is: "<<sum(a,b)<<endl;
	cout<<"Sum of "<< a << b << c <<" is: "<<sum(a,b,c)<<endl;
	return 0;
}
