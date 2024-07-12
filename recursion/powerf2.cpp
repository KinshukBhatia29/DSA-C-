#include<iostream>
using namespace std;
int powerof2(int n)
{
	if(n==0)
	return 1;
	return 2*powerof2(n-1);
}
int main()
{
	int a,b;
	cout<<"enter the no.:";
	cin>>a;
	b=powerof2(a);
	cout<<"factorial is:"<<b;
}
