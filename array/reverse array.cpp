#include<iostream>
using namespace std;
void printarray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void reverse(int arr[],int n)
{ int start=0;
int end=n-1;
	while(start<=end)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}
int main()
{
	int arr[5]={ 1,2,3,4,5};
	int brr[6]={2,3,4,5,6,7};
	cout<<"array before swapping ";printarray(arr,5);cout<<endl;
	reverse(arr,5);
	cout<<"array after swapping ";printarray(arr,5);cout<<endl;
	cout<<"array before swapping ";printarray(brr,6);cout<<endl;
	reverse(brr,6);
	cout<<"array after swapping ";printarray(brr,6);cout<<endl;
	
}
