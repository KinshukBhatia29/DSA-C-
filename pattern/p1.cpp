/*#include <iostream>
using namespace std;
int main()
{
	int n,i=1,j=1;
	cin>>n;
	while(i<=n)
	{
		while(j<=n)
		{
			cout<<"*;
			j=j+1;
		}
		cout<<endl;
		i=i+1;
	}
}*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
		
		cout<<"*";
	}
	cout<<endl;
	}
}
