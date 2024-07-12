#include<iostream>
#include<math.h>
using namespace std;
int ones(int r)
{
	int c=0;
	while(r!=0)
	{
		int bit =r&1;
		if(bit==1)
		{
			c+=1;
		}
		r= r>>1;
		
	}
return c;
}
int add(int a,int b)
{
	int n=ones(a)+ones(b);
	return n;
}
int main()
{
	int a,b;
	cout<<"enter no"<<endl;
	cin>>a>>b;
	int k=add(2,3);
	cout<<"no of ones "<<k<<endl;
}
