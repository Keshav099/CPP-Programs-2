#include<iostream>
using namespace std;
#define PI 3.14

int area(float r)
{
	return PI*r*r;
}
int area(int b,int a)
{
	return 0.5*b*a;
}	
int area(int l1,int w,int h)
{
	return l1*w*h;
}
int area(int l)
{
	return l*l;
}

int main()
{
	int l1,l2,w,h,b,a; float r;
	cout<<"Circle:-"<<endl;
	cout<<"Radius:"; cin>>r;
	cout<<"Triangle:-"<<endl;
	cout<<"Base:"<<endl; cin>>b;
	cout<<"Altitude:"<<endl; cin>>a;
	cout<<"Rectangle:-"<<endl;
	cout<<"Length:"<<endl; cin>>l1;
	cout<<"Width:"<<endl; cin>>w;
	cout<<"Height:"<<endl; cin>>h;
	cout<<"Square:-"<<endl;
	cout<<"Length:"<<endl; cin>>l2;	
	cout<<"Circle Area:"<<area(r)<<endl;
	cout<<"Traingle Area:"<<area(b,a)<<endl;
	cout<<"Rectangle Area:"<<area(l1,w,h)<<endl;
	cout<<"Square Area:"<<area(l2)<<endl;
	return 0;
}
