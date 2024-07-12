#include <iostream>
using namespace std;
void sum(int arr[][4],int m,int n)
{int maxi=INT_MIN;
int row;
	for(int i=0;i<3;i++)
	{	int add=0;
		for(int j=0;j<4;j++)
		{
			add=add+arr[i][j];
		}
		if(add>maxi)
		{
			maxi=add;
			row=i;
		}
	}
	cout<<"The largest sum is "<<maxi<<" at row "<<(row+1);
}
int main()
{
	int arr[3][4];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cin>>arr[i][j];
		}
	}
	cout<<"matrix is"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	sum(arr,3,4);
}
