#include<iostream>
using namespace std;
void swap(int &a, int &b) // It is the only difference from above program
{
int temp=a;
a=b;
b=temp;
}
int main()
{
int a,b;
cout<<"Enter two numbers:";
cin>>a>>b;
swap(a,b);
cout<<"a="<<a<<"b="<<b;
return 0;
}

