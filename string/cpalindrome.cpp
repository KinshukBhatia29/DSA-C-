#include<iostream>
#include<string.h>
using namespace std;
bool valid(char ch)
{
if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z')||(ch>='0' && ch<='9'))
{
return 1;}

return 0;
}
char lowercase(char ch)
{
	if(ch>='a'&& ch<='z')
	{ 
		return ch;
	}
	else
	{
		char temp=ch -'A'+'a';
		return temp;
	}
}
bool checkpalindrome(string temp)
{
	int s=0;
	int e= temp.length()-1;
	while(s<e)
	{
		if(temp[s]!=temp[e])
		{
			return 0;
		}
		else{	
		s++;
		e--;}
	}
	return 1;
	
}
void check(string str)
{
	string temp ="";
	for(int i=0;i<str.length();i++)
	{
		if(valid(str[i]))
		{
			temp[i]=str[i];
		}
	}
	for(int j=0;j<str.length();j++)
	{
		temp[j]=lowercase(temp[j]);
	}
	int n=checkpalindrome(temp);
	if(n==0)
	{
		cout<<"it is not palindrome";
	}
	else{
		cout<<"its palindrome";
	
}
}
int main()
{
	string s;
	cout<<"enter word ";
	cin>>s;
	
	check(s);
}
