#include<iostream>
using namespace std;
long long int sqrroot(int n)
{if (n == 0 || n == 1)
        return  n;
int  start=0;
 int end=n-1;
long long int ans=0;
	long long int mid=start+((end-start)/2);
	while(start<=end)
	{
		if(mid*mid<n)
		{
			ans=mid;
			start=mid+1;
		}
		else if(mid*mid>n)
		{
			end=mid-1;
		}
		else if(mid*mid==n)
		{return mid;
			
		}
		mid=start+((end-start)/2);
	}
	return ans;
	
}
double moreprecision(int n,int m,int l)
{
	double factor =1;
	double ans=l;
	for(double i=0;i<3;i++)
	{
		factor=factor/10;
		cout<<"hello"<<endl;
		for(double j=ans;j*j<l;j=j+factor)
		{cout<<"hello";
			ans=j;
			cout<<ans;
		}
	}
	return ans;
}
int main()
{   
	int k=1;
	while(k==1){
	long long int n,l,m;
	cout<<"enter no"<<endl;
	cin>>n;
	l=sqrroot(n);
	cout<<"integerpart of  root is  "<<l<<endl;
	cout<<"digits upto which precision is required";
	cin>>m;
	int ans=moreprecision(n,m,l);
	cout<<"the square root upto "<<m<<" precision is "<<ans<<endl;
	
	cout<<"do you want to continue";
	cin>>k;
}
}
