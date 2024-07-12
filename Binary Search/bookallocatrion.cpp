#include<iostream>
using namespace std;
bool isPossible(int arr[],int n,int m,int mid)
{
	int Pagesum=0;
	int studentcount=1;
	for (int i=0;i<=n;i++)
	{
	if(Pagesum+arr[i]<=mid)
	{
		Pagesum =Pagesum+arr[i];
	}
	else{
		studentcount++;
		if(studentcount>m||arr[i]>mid)
		{return false;
		}
		Pagesum=arr[i];
	}
	
}
return true;
}
int bookalloc(int arr[],int n,int m)
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	int s=0;
	int e=sum;
	int ans=-1;
	 int mid=s+((e-s)/2);
	while(s<=e)
	{
		if(isPossible(arr,n,m,mid))
		{
		ans=mid;
		e=mid-1;	
		}
		else
		{
			s=mid+1;
		}
	mid=s+((e-s)/2);	
	}
	return ans;
}
int main()
{   
	int k=1;
	while(k==1){
		int arr[100];
	int n,l,m;
	cout<<"enter no of books"<<endl;
	cin>>n;
	cout<<"enter no of pages in book";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter students";
	cin>>m;
	l=bookalloc(arr,n,m);
	cout<<"min no. of pages"<<l<<endl;
	
	cout<<"do you want to continue";
	cin>>k;
}
}

