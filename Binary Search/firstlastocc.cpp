#include<iostream>
using namespace std;
int firstocc(int arr[],int size,int k)
{
	int start=0;
	int end=size-1;
	int mid=start+((end-start)/2);
	int ans=0;
	while(start<=end)
	{
		if(arr[mid]==k)
		{
			ans=mid;
			end=mid-1;
		}
		else if(k>arr[mid])
		{
			start=mid+1;
			
		}
		else
		{
			end=mid-1;
		}
		mid=start+((end-start)/2);
	}
	return -1;
	
}
int lastocc(int arr[],int size,int k)
{
	int start=0;
	int end=size-1;
	int mid=start+((end-start)/2);
	int ans=0;
	while(start<=end)
	{
		if(arr[mid]==k)
		{
			ans=mid;
			start=mid+1;
		}
		else if(k>arr[mid])
		{
			start=mid+1;
		
		}
		else
		{
			end=mid-1;
		}
		mid=start+((end-start)/2);
	}
	return -1;
	
}
int main()
{   
	int k=1;
	while(k==1){
	int arr[100],n,key;
	cout<<"no of elements"<<endl;
	cin>>n;
		for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter element";
	cin>>key;
	int index=firstocc(arr,n,key);
	cout<<"the first occurance is at "<<index<<" index"<<endl;
	int last=lastocc(arr,n,key);
	cout<<"the last occurance is at "<<index<<" last"<<endl;
	cout<<"do you want to continue";
	cin>>k;
}
}
