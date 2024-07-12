#include<iostream>
using namespace std;
void print(int arr[],int n)
{
for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}	
}
int partition(int arr[],int s,int e)
{int cnt=0;
	int pivot=arr[s];
	for(int i=s+1;i<=e;i++)
	{
		if(arr[i]<pivot)
		{
			cnt++;
		}
	}
	//place pivot at right position
	int pivotindex=s+cnt;
	swap(arr[pivotindex],arr[s]);
	//left and right part
	int i=s;
	int j=e;
	while(i<pivotindex && j>pivotindex)
	{
		while(arr[i]<pivot)
		{
			i++;
		}
		while(arr[j]>pivot)
		{
			j--;
		}
		
	while(i<pivotindex && j>pivotindex)
	{
		swap(arr[i++],arr[j--]);	
	}
}
	return pivotindex;	
}
void quicksort(int *arr,int s,int e)
{
	if(s>=e)
	return;
	int p=partition( arr,s,e);
	quicksort(arr,s,p-1);
	quicksort(arr,p+1,e);
	
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
	quicksort(arr,0,n-1);
	cout<<"Sorted array :";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}

}
