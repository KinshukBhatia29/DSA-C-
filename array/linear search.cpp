#include<iostream>
using namespace std;
void search(int arr[],int n,int l)
{int c=0;
int index=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==l)
		{
			c++;
			index=i;
		    
		}
	}
	if(c==1)
	{
		cout<<"element is present in array at "<<(index+1)<<" position"<<endl;
	}
	else
	{
		cout<<"element is not present in array"<<endl;
	}
	
}
int main()
{
	int m,n;
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	cout<<"enter the element"<<endl;
	cin>>m;
	search(arr,10,m);
}
	
