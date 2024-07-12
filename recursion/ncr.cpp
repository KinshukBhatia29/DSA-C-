#include<iostream>
using namespace std;
int comb(int n,int r)
{
	if(n==0)
	return 0;
	if(r==0||r==n)
	return 1;
	return comb(n-1,r-1)+comb(n-1,r);
}
int main()
{
	int a,b,c;
	cout<<"enter n:";
	cin>>a;
	cout<<"enter r:";
	cin>>c;
	b=comb(a,c);
	cout<<"ncr:"<<b;
}
