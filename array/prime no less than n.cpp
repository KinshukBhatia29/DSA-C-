#include <iostream> 
#include<math.h>
using namespace std; 
void isprime(int n)
{for (int i=2;i<=n;i++){
int c=0;
	for (int j=2;j<i;j++)
	{
		if(i%j==0){
		c++;}
		
	}
	if(c==0)
	cout<<i<<" ";}
	
}
int main()
{
	int n;
	cout<<"enter no"<<endl;
	cin>>n;
	cout<<"prime no. less than "<<n<<":";
	isprime(n);
}
