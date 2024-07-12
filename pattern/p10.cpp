#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			if (i==1)
			{
				cout<<"A"<<" ";
			}
		       else if (i==2)
			{
				cout<<"B"<<" ";
			}
		        else if (i==3)
			{
				cout<<"C"<<" ";
			}
	}
	cout<<endl;
	}
}
