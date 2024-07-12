#include <iostream> 
#include<math.h>
using namespace std; 
int main() 
{ 
    
    int n,ans=0 ;
	cout<<"enter the no of elements"<<endl; 
    cin>>n;
  int numbers[n]; 
    cout<<"enter elements"<<endl;
  
    for (int i = 0; i < n; i++) { 
     
        cin >> numbers[i]; 
    } 
    for (int k=0;k<n;k++)
    {
    ans=(ans*10)+ numbers[k];
	}
	cout<<"number is "<<ans;
}
