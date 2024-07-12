#include<iostream>
using namespace std;
void printarray(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i];
	}
}
void reverse(int arr[],int n)
{ 
int start=0;
int end=n-1;
	while(start<=end)
	{
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	printarray(arr,n);
}
void addarray(int a1[],int n,int a2[],int m,int a3[])
{
	int i=n-1;
	int j=m-1;
	int k,sum=0;
	int carry=0;
	if(n>=m)
	{
		k=n;
	}
	else
	{
		k=m;
	}
	while(i>=0 && j>=0)
	{ 
		int a=a1[i];
		int b=a2[j];
	 sum=a1[i]+a2[j]+carry;
		carry=sum/10;
		sum=sum%10;
		a3[k]=sum;
		i--;
		j--;
		k--;	
	}
	while(i>=0)
	{
	sum=a1[i]+carry;
	 
		carry=sum/10;
		sum=sum%10;
		a3[k]=sum;
		i--;
		k--;	
	}
	while(j>=0)
	{
	sum=a2[j]+carry;
	
		carry=sum/10;
		sum=sum%10;	
	a3[k]=sum;
		j--;
		k--;
	}
	while(carry!=0)
	{
		sum=carry;
		carry=sum/10;
		sum=sum%10;
		a3[k]=sum;
		
}
reverse(a3,k);	
}
int main()
{int k=1;
while(k=1)
{
	int a1[100];
	int a2[100];
	int n,m;
	int a3[200];
	
	cout<<"no of digits in first  no."<<endl;
	cin>>n;
		for(int i=0;i<n;i++)
	{
		cin>>a1[i];
	}
		cout<<"no of digitd in second no."<<endl;
	cin>>m;
		for(int i=0;i<m;i++)
	{
		cin>>a2[i];
	}

	cout<<"the added no.";
	addarray(a1,n,a2,m,a3);
	cout<<endl;
	cout<<"do you want to continue";
	cin>>k;
	}
	
}
