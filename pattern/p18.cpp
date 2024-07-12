#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=n-i;j>=1;j--){
			cout<<" ";
		}
		for(int k=1;k<=i;k++){
			cout<<k;
		}
		for(int l=2;l<=i;l++){
			cout<<i-l+1;
		}
	cout<<endl;
	}
}
