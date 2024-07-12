#include<iostream>
using namespace std;
bool sorted(int arr[],int n)
{
	int c=0;
	for(int i=1;i<n;i++)
	{
		if(arr[i-1]>arr[i]){
			c++;
		}
		
	}
	if(arr[n-1]>arr[0])
	{
		c++;
	}
	if(c<=1)
	{
		return true;
	}
	return false;
	
}
int main()
{
	int n,k;
	cout<<"enter size";
	cin>>n;
	int arr[100];
		for(int i=0;i<n;i++)
	{
		cin>>arr[i];	}
	k=sorted(arr,n);
	if(k==1)
	{
		cout<<"array is sorted"<<endl;
	}
	else
	{
		cout<<"array is not sorted";
	}
}
