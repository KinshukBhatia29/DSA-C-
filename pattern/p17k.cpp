#include <iostream>
using namespace std;
int main()
{
	for(int i=1;i<=3;i++)
	{cout<<"*";
		for(int j=1;j<=4-i-1;j++){
			cout<<" ";
		}
		for(int k=1;k<=1;k++){
			cout<<"*";
		}
	cout<<endl;
	}
		for(int i=1;i<3;i++)
	{cout<<"*";
		for(int j=0;j<=i-1;j++){
			cout<<" ";
		}
		for(int k=1;k<=1;k++){
			cout<<"*";
		}
	cout<<endl;
	}
}
