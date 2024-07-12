#include<iostream> 
#include<math.h> 
using namespace std; 
int shift(int arr[],int n) 
{ 
int first=arr[(n-1)]; 
int second; 
for(int i=0;i<n;i++) 
{  
second=arr[i]; 
// second=arr[i+1];  
arr[i]=first; first=second;  
} 
} 
void printarray(int arr[],int n) 
{ 
for(int i=0;i<n;i++) 
{ 
cout<<arr[i]<<" "; 
 } 
} 
int main() 
{ 
 int size; 
 cout<<"enter size"; 
 cin>>size; 
 int arr[100]; 
  for(int i=0;i<size;i++) 
 { 
  cin>>arr[i]; } 
 shift(arr,size); 
 cout<<"array after shifting "; 
 printarray(arr,size); 
}
