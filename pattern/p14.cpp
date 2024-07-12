#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	char K=65;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++){
			cout<<char(K+n-i+j-1)<<" ";
		}
	
	cout<<endl;
	}
}
