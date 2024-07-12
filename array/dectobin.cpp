#include<iostream>
#include<math.h>
using namespace std;
void decimaltobinary(int r)
{
	int ans=0;
	int i=0;
	while(r!=0)
	{
		int bit =r&1;
		ans=(bit*pow(10,i))+ans;
		r= r>>1;
		i++;
	}
cout<<ans;
}
int main()
{
	int n;
	cout<<"enter number"<<endl;
	cin>>n;
    decimaltobinary(n);
	
}
