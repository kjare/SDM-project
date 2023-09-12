#include<iostream>
using namespace std;

int main()
{
	int a;
	a=30;
	int &b=a;
	int &c=b;
	cout<<&a<<endl;
	cout<<&b<<endl;
	cout<<&c<<endl;
	c=20;
	cout<<a<<b<<c;
 cout<<"yash";
	
}
