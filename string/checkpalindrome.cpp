#include<iostream>
#include<string.h>
using namespace std;
int getlength(char word[])
{int c=0;
	for(int i=0;word[i]!='\0';i++)
	{
		c++;
	}
	return c;
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
/*int checkpalindrome(char word[],int len)
{int c=0;
		int s=0;
	int e=len-1;
	while(s<e)
	{
		if(word[s]==word[e])
		{
			c++;
		}
		s++;
		e--;
	}
	return c;
}*/
bool checkpalindrome(char word[],int len)
{
	int s=0;
	int e=len-1;
	while(s<e)
	{
		if(lowercase(word[s])!=lowercase(word[e]))
		{
			return 0;
		}
		else{	
		s++;
		e--;}
	}
	return 1;
	
}
int main()
{
	char word[30];
	cout<<"enter word ";
	cin>>word;
	int len=getlength(word);
	int n=checkpalindrome(word,len);
	/*if(n<len/2)
	{
		cout<<"it is not palindrome";
	}
	else{
		cout<<"its palindrome";
	}*/
	if(n==0)
	{
		cout<<"it is not palindrome";
	}
	else{
		cout<<"its palindrome";
}
}
