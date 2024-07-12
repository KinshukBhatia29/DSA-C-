#include <iostream> 
#include<math.h>
using namespace std; 
int fact(int k)
{
	int ans=1;
	for(int i=1;i<=k;i++)
	{
		ans=ans*i;
	}
	cout<<ans<<endl;
	return ans;
}
int nCr(int n,int r)
{
	int num=fact(n);
	int denom=fact(r)*fact(n-r);
	return num/denom;
	
}
int main() 
{
	int a,b;
	cout<<"enter n and r"<<endl;
	cin>>a>>b;
	int result=nCr(a,b);
	cout<<"the answer is "<<result<<endl;
}
