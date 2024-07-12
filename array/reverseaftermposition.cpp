#include<iostream>
using namespace std;
void printarray(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void reversearray(int arr[],int size,int m)
{
	int start=m;
	int end=size-1;
	while(start<=end)
	{
		swap(arr[start],arr[end]);
		start++,
		end--;
	}
	printarray(arr,size);
}
int main()
{
	int arr[100],size,m;
	cout<<"no of elements"<<endl;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"position after which reversing is to be performed";
	cin>>m;
	reversearray(arr,size,m);
}
