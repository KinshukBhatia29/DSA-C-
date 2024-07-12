#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter number"<<endl;
	cin>>n;
int m=n;
int mask=0;
if(n==0)
{
	return 1;
}
while(m!=0)
{
mask=(mask<<1)|1;
m=m>>1;	
}
int result=(~n)&mask;
cout<<"the complement is "<<result;
}
