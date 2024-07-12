#include<iostream>
using namespace std;
void printarray(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void swapalternate(int arr[],int n)
{for(int i=0;i<n;)
	{ 
if(i+1<n){
		swap(arr[i],arr[i+1]);
		
	}i=i+2;}
	
}
int main()
{
	int arr[5]={ 1,2,3,4,5};
	int brr[6]={2,3,4,5,6,7};
	cout<<"array before swapping ";printarray(arr,5);cout<<endl;
	swapalternate(arr,5);
	cout<<"array after swapping ";printarray(arr,5);cout<<endl;
	cout<<"array before swapping ";printarray(brr,6);cout<<endl;
	swapalternate(brr,6);
	cout<<"array after swapping ";printarray(brr,6);cout<<endl;
	
}
