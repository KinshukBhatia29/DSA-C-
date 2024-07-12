#include<iostream>
using namespace std;
int fibonacci(int n)
{
	if(n==1)
	return 1;
	if(n==0)
	return 0;
	int ans=fibonacci(n-1)+fibonacci(n-2);
	cout<<fibonacci(n-1);
	return ans;
}
int main()
{
	int a,b;
	cout<<"enter the no.:";
	cin>>a;
	b=fibonacci(a);
	cout<<"fibonacci term:"<<b;
}
