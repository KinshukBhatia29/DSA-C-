#include<iostream>
using namespace std;
void fact(int n)
{
	int ans=1;
	for(int i=1;i<=n;i++)
	{
		ans=ans*i;
		if(ans<=n)
		cout<<ans<<" ";
		
	}
}
int main()
{
	int n=6;
	fact(6);
}
