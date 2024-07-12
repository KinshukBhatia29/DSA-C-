#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	cout<<"fibonacci series is"<<endl;
	int a=0,b=1;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
	
	for(int i=0;i<=n;i++)
	{
		int next;
		next=a+b;
		cout<<"a+b"<<"="<<a<<"+"<<b<<"="<<next<<endl;
		a=b;
		b=next;
	}
}
