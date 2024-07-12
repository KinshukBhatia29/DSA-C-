#include<iostream>
using namespace std;
int peak(int arr[],int size)
{
	int start=0;
	int end=size-1;
	int mid=start+((end-start)/2);
	while(start<end)
	{
	    if(arr[mid+1]>arr[mid])
		{
			start=mid+1;
		}
		else
		{
			end=mid;
		}
		mid=start+((end-start)/2);
	}
	cout<<"the peak is "<<arr[mid]<<endl;
	return mid;
	
}
int main()
{   
	int k=1;
	while(k==1){
	int arr[100],n;
	cout<<"no of elements"<<endl;
	cin>>n;
		for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}	
	int index=peak(arr,n);
	cout<<"the peak is at "<<index<<" index"<<endl;
	cout<<"do you want to continue";
	cin>>k;
}
}
