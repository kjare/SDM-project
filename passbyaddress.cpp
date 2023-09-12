#include<iostream>
using namespace std;
void swap(int*,int*);
int main()
{
	int a,b;
	int x=75;
	cout<<"Enter a,b"<<endl;
	cin>>a>>b;
	cout<<"before swapping values of a and b are : "<<a<<b<<endl;
	swap(&a,&b);
	cout<<"after swapping values of a and b are : "<<a<<b<<endl;
	cout<<"hello world";
	cout<<"value of x is "<<x;
}
void swap(int* p,int* q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
	cout<<"after swapping values of a and b are : "<<*p<<*q<<endl;
}
