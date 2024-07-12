#include <iostream> 
#include<math.h>
using namespace std;
int AP(int n)
{
	int ans=(3*n)+7;
	return ans;
}
int main()
{
	int n;
	cout<<"enter N"<<endl;
	cin>>n;
	int a=AP(n);
	cout<<"The nth term is "<<a<<endl;
}
	
