#include<iostream>
using namespace std;
void moved(int n ,char s,char d)
{
	cout<<"moved disk "<<n<<" from "<<s<<" to "<<d<<endl;
}
void toh(int n,char s,char a,char d)
{
	if(n==1)
	{
		moved(1,s,d);
		return;
	}
	toh(n-1,s,d,a);
	moved(n,s,d);
	toh(n-1,a,s,d);
}
int main()
{
	int a;
	cout<<"enter no. of disk:";
	cin>>a;
	toh(a,'S','H','D');
}
