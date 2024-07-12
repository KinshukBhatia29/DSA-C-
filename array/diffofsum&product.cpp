#include<iostream>
using namespace std;
void dsp(int n)
{int sum =0;
int product=1;
	while(n!=0)
	{
		int k=n%10;
		sum=sum+k;
		product=product*k;
		n=n/10;
		
	}
	cout<<"the sum is "<<sum<<endl;
	cout <<"the product is "<<product<<endl;
	cout<<"the difference is "<<(product-sum)<<endl;
}
int main()
{
	int digit;
	cout<<"enter the number"<<endl;
	cin>>digit;
	dsp(digit);
}
