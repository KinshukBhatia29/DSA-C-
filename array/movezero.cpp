#include<iostream>
using namespace std;
void printarray(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void movezero(int arr[],int n)
{
	int i=0;
	for(int j=0;j<n;j++)
	{
		while(arr[j]!=0)
		{
			swap(arr[j],arr[i]);
			i++;
		}
	}
	printarray(arr,n);
}
int main()
{
	int arr[100],size;
	cout<<"no of elements"<<endl;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	movezero(arr,size);
}
