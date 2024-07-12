#include<iostream>
using namespace std;
int f(int n, int k) 
{ 
if(n==0) return 0; 
else if(n%2) return 5; 
else return 4; 
}
int main() 
{
int	k=f(20,1);
cout<<k;
}
/*
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
		swap(arr[min],arr[j]);	
		}
		}
		
	}
	cout<<endl;
	cout<<"sorted array";
	print(arr,n);
}
int main()
{
	int n;
	int arr[100];
	cout<<"enter the no.of elements: ";
	cin>>n;
	cout<<endl;
	cout<<"Enter elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	selectionsort(arr,n);
}*/

