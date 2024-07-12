#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int k=n-i+1;k>=1;k--){
			cout<<"*"<<" ";
		}
	cout<<endl;
	}
}
