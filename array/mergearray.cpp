#include<iostream>
using namespace std;
void printarray(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void merge(int a1[],int n,int a2[],int m,int a3[])
{
	int i=0;
	int j=0;
	int k=0;
    int l=n+m;
	while(i<n && j<m)
	{
		if(a1[i]<a2[j])
		{
			a3[k]=a1[i];
			i++;
			k++;
		}
		else
		{
			a3[k]=a2[j];
			j++;
			k++;
			
		}
	}
	while(i<n)
	{
		a3[k]=a1[i];
		i++;
		k++;
	}
	while(j<m)
	{
		
			a3[k]=a2[j];
			j++;
			k++;
	}
	printarray(a3,l);
}
int main()
{
	int a1[100];
	int a2[100];
	int n,m;
	int a3[200];
	
	cout<<"no of elements in first sorted array"<<endl;
	cin>>n;
		for(int i=0;i<n;i++)
	{
		cin>>a1[i];
	}
		cout<<"no of elements in second sorted array"<<endl;
	cin>>m;
		for(int i=0;i<m;i++)
	{
		cin>>a2[i];
	}
	cout<<"the merged sorted array";
	merge(a1,n,a2,m,a3);
	
}
