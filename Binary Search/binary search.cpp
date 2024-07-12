#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int k)
{
	int start=0;
	int end=size-1;
	int mid=start+((end-start)/2);
	while(start<=end)
	{
		if(arr[mid]==k)
		{
			return mid;
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
	int index=binarysearch(arr,n,key);
	cout<<"the key is at "<<index<<" position"<<endl;
	cout<<"do you want to continue";
	cin>>k;
}
}
