#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int a,b;
	char op;
	cout<<"enter no"<<endl;
	cin>>a>>b;
	cout<<"enter operation"<<endl;
	cin>>op;
	switch(op)
	{
		case '+':
			cout<<"addition is "<<(a+b)<<endl;
			break;
		case '-':
			cout<<"subtraction is "<<(a-b)<<endl;
			break;
		case '*':
			cout<<"multiplication is "<<(a*b)<<endl;
			break;
		case '/':
			cout<<"division is "<< (a/b)<<endl;
			break;
		default:
			cout<<"wrong operation";
	}
}
