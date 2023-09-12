#include<iostream>
using namespace std;

int main()
{
	int a;
	int b;
	a=30;
	int &b=a;
	int &c=b;
	cout<<&a<<endl;
	cout<<&b<<endl;
	cout<<&c<<endl;
	c=30;
	cout<<a<<b<<c;
 cout<<"project";
	
}
