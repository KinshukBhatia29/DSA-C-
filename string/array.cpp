#include<iostream>
using namespace std;
int main()
{
	//filling array with a single element
	int arr[100];
	fill_n(arr,100,-1);
	for(int i=0;i<100;i++){
	cout<<arr[i]<<endl;}
	//size of array
	int k=sizeof(arr)/sizeof(int);
	cout<<k;

}
