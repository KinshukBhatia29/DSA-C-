#include<iostream>
using namespace std;
void print(int arr[],int n)
{
for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}	
}
void insertionsort(int arr[],int n)
{
	for(int i=1;i<n-1;i++)
	{
		int j=i;
	while(j>0 && arr[j]<arr[j-1])
	{
		swap(arr[j],arr[j-1]);
		j--;
	}
}
	cout<<"Sorted array :";
	print(arr,n);
}
int main()
{
	int n;
	int arr[100];
	cout<<"Enter the no.of elements: ";
	cin>>n;
	cout<<"Enter elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	insertionsort(arr,n);
}
