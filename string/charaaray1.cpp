#include<iostream>
#include<string.h>
using namespace std;
int getlength(char name[])
{int c=0;
	for(int i=0;name[i]!='\0';i++)
	{
		c++;
	}
	return c;
}
void swap(char name[],int len)
{
	int s=0;
	int e=len-1;
	while(s<e)
	{
		swap(name[s],name[e]);
		s++;
		e--;
	}
	cout<<"name after swapping";
	cout<<name;
}
int checkpalindrome(char name[],int len)
{
		int s=0;
	int e=len-1;
	while(s<e)
	{
		if(name[s]==name[e])
		{
			c++;
		}
		s++;
		e--;
	}
	return c;
}
int main()
{

	char name[30];
	cout<<"enter name ";
	cin>>name;
	/*cout<<"your name is "<<name<<endl;
	name[3]='\0';
	cout<<"ater inserting null character at 3rd position "<<name;*/
	
	int len=getlength(name);
	cout<<"the length is"<<len<<endl;
	//swap(name,len);
	int n=checkpalindrome()
}
