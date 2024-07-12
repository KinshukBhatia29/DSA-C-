#include<iostream>
using namespace std;
void print(int arr[],int n)
{
for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}	
}
void bubblesort(int arr[],int n)
{
	for(int i=1;i<n;i++)
	{
		// for rounds 1 to n-1
	bool swapped=false;
	for(int j=0;j<n-i ;j++)
	{// process element till n-i index
		if(arr[j]>arr[j+1])
		{
			swap(arr[j],arr[j+1]);
			swapped=true;
		}
		}
		if(swapped==false)
		{//already sorted
			break;
			}	
	}
	
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
bubblesort(arr,n);
cout<<"Sorted array ";
	print(arr,n);
}
