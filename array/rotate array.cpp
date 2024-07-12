#include<iostream>
using namespace std;
void printarray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void rotate(int arr[],int n,int k)
{

int temp[n];
for (int i=0;i<n;i++)
{
	temp[(i+k)%n]=arr[i];
}
arr=temp;
printarray(arr,n);
}
int main()
{
	int n,k;
	cout<<"enter size";
	cin>>n;
	int arr[100];
		for(int i=0;i<n;i++)
	{
		cin>>arr[i];	}
	cout<<"enter k for which you have to rote array by right steps ";
	cin>>k;
	rotate(arr,n,k);
}
