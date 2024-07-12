#include <iostream> 
#include<math.h>
using namespace std; 
int main() 
{ 
    
    int n,ans=0,i=0;
	cout<<"enter the binary no."<<endl; 
    cin>>n;
  
  while(n!=0){
  	int digit=n%10;
  	ans=ans+(digit*pow(2,i));
  	n=n/10;
  	i++;
  }
  cout<<"the number is "<<ans;
}
