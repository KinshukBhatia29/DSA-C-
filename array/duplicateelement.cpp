#include<iostream>
using namespace std;
void dup(int arr[],int size)
{
int i,k;
    for( i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
    {int sum=0;
        if(arr[i]==arr[j])
        sum++;
        k=sum;
    }
    }
     if(k==2)
    {
    	cout<<"duplicate exist"<<arr[i];
	}  
}
int main ()
{
    int array[5]={1,3,2,5,5};
    dup(array,5);
}
