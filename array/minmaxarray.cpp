#include<iostream>
#include<math.h>
using namespace std;
int min(int arr[],int n)
{
	int i;
	int mini= INT_MAX ;
	/*for(int i=0;i<n;i++)
	{
		if(arr[i]<mini){
			mini=arr[i];
		}	}*/
		for(i=0;i<n;i++)
	{
	mini=min(mini,arr[i]);};
	return i;
}
int max(int arr[],int n)
{
	int maxm= INT_MIN ;
/*	for(int i=0;i<n;i++)
	{
		if(arr[i]>max){
			max=arr[i];
		}	}*/
		for(int i=0;i<n;i++)
	{
		maxm=max(maxm,arr[i]);}
	return maxm;
}
int main()
{
	int size;
	cout<<"enter size";
	cin>>size;
	int arr[100];
		for(int i=0;i<size;i++)
	{
		cin>>arr[i];	}
	int k=max(arr,size);
	cout<<"the max value is"<<k<<endl;
	int l=min(arr,size);
	cout<<"the min value is"<<l<<endl;
	
	
}
