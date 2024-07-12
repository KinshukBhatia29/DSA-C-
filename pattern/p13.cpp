#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	int K=65;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			cout<<char(K+j-1)<<" ";
		}
		K++;
	cout<<endl;
	}
}
