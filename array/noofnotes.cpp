#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n,a,b,c,d;
	char op;
	cout<<"enter amount"<<endl;
	cin>>n;
	switch(1)
	{
		case 1:
		{
			int c=n/100;
			cout<<"no. of 100rs notes "<<c<<endl;
			n=n-c*100;
		}
		case 2:
		{
			int b=n/50;
			cout<<"no. of 50rs notes "<<b<<endl;
			n-=b*50;
		}
		case 3:
		{
			int a=n/20;
			cout<<"no. of 20rs notes "<<a<<endl;
			n-=a*20;
		}
		case 4:
		{
			int d=n/10;
			cout<<"no. of 10rs notes "<<d<<endl;
			n-=d*10;
		}
	}
}
