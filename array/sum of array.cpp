#include<iostream>
using namespace std;
int sum(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"the sum is "<< sum<<endl;
	
	return sum;
	
}
int main()
{
	int arr[100],size;
	cout<<"no of elements"<<endl;
	cin>>size;
	int k=sum(arr,size);
	cout<<"sum is:"<<k;
}
	
