#include<iostream>
using namespace std;
class A
{
	int value;
	char name[50];
	public:
	void getdata()
	{
		cin>>value;
		cin>>name;
	}
	void printdata()
	{
	cout<<"value is "<< this->value<<endl;;
	cout<<"name is "<<this->name;	
	}
};
int main()
{
	A k,l;
	k.getdata();
	k.printdata();
	l.getdata();
	l.printdata();
}

