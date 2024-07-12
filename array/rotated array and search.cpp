#include<iostream>
using namespace std;
int pivot(int arr[],int size)
{
	int start=0;
	int end=size-1;
	int mid=start+((end-start)/2);
	while(start<end)
	{
	    if(arr[mid]>=arr[0])
		{
			start=mid+1;
		}
		else
		{
			end=mid;
		}
		mid=start+((end-start)/2);
	}
	cout<<"the pivot element is "<<arr[mid]<<endl;
	return end;
	
}
int binarysearch(int arr[],int start,int end,int k)
{
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
	int arr[100],n,l,key;
	cout<<"no of elements"<<endl;
	cin>>n;
		for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}	
	cout<<"enter element";
	cin>>key;
	int index=pivot(arr,n);
	cout<<"the pivot element is at "<<index<<" index"<<endl;
	if(arr[index]<=key<=arr[n-1])
	{
		 l=binarysearch(arr,index,n-1,key);
	}
	else
	{
		l=binarysearch(arr,0,index-1,key);
	}
	cout<<"the element "<<key<<" is at "<<l<<" index"<<endl;
	cout<<"do you want to continue";
	cin>>k;
}
}
