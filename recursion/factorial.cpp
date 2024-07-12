#include<iostream>
using namespace std;
int factorial(int n)
{
	if(n==0)
	return 1;
	return n*factorial(n-1);
}
int main()
{
	int a,b;
	cout<<"enter the no.:";
	cin>>a;
	b=factorial(a);
	cout<<"factorial is:"<<b;
}
