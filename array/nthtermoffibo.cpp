#include<iostream>
using namespace std;
int fibo(int n)
{
	int a=0,b=1;
	int next;
	for(int i=2;i<n;i++)
	{
		next=a+b;
		a=b;
		b=next;
	}
	return next;
	
}int main()
{
	int n;
	cout<<"enter n"<<endl;
	cin>>n;
	cout<<n<<" th term is "<< fibo(n)<<endl;
	
}
