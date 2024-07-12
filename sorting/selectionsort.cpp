#include<iostream>
using namespace std;
void print(int arr[],int n)
{
for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}	
}
void selectionsort(int arr[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		int min=i;
	for(int j=i+1;j<n;j++)
	{
		if(arr[j]<arr[min])
		{
			min=j;
		}
		}
		swap(arr[min],arr[i]);	
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
	selectionsort(arr,n);
}
