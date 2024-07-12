#include<iostream>
#include<string.h>
using namespace std;
//1
int getlen(string s)
{
	int c=0;
	int i=0;
	while(s[i]!= NULL)
	{
		c=c+1;
		i++;
	}
	return c;
}
//2
char lowercase(char ch)
{
	if(ch>='a'&& ch<='z')
	{ 
		return ch;
	}
	else if(ch>='A' && ch<+'Z')
	{
		char temp=ch -'A'+'a';
		return temp;
	}
}
//3
void countvowel(string s,int n)
{
int v=0;
for(int i=0;i<n;i++)
{
char ch=s[i];
if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
{
	v++;		
}	
}
cout<<"No of vowels:"<<v<<endl;;
}
//4
int valid(string s,int n)
{	for(int i=0;s[i]!=NULL;i++){
	char c=s[i];
	if((c<'A'||(c>'Z' && c<'a')||c>'z'))
	{
		return 0;
	}
}
return 1;
}
//5
void swap(string s,int len)
{
	int st=0;
	int e=len-1;
	while(st<e)
	{
		swap(s[st],s[e]);
		st++;
		e--;
	}
	cout<<"Reverse string: ";
	for(int i=0;i<len;i++)
	{
		cout<<s[i];
	}
}
//6
bool checkpalindrome(string f,int n)
{
	int s=0;
	int e= n-1;
	while(s<e)
	{
		if(f[s]!=f[e])
		{
			return 0;
		}
		else{	
		s++;
		e--;}
	}
	
}
//7
void Duplicates(string f, int size) 
{
int count=0;
 int cnt[26]={0};
 for(int i=0;i<size;i++)
	{
		char ch=f[i];
		count=ch-'a';
		cnt[count]++;
 }
 for(int i=0;i<26;i++)
 {
 	if(cnt[i]>1)
 	{
 		char o=i+'a';
 		cout<<"Duplicate is :"<<o<<endl;
	 }
 }
 
}
int main()
{
	string s,f;
	cout<<"Enter string:";
	cin>>s;
	//1
	int k=getlen(s);
	cout<<"Length of string:"<<k<<endl;
	//2
	cout<<"Loweracse string:";
	for(int i=0;i<k;i++)
	{
	s[i]=lowercase(s[i]);
	cout<<s[i];
	}
	cout<<endl;
	//3
	countvowel(s,k);
	//4
	cout<<"Validity of string:";
	int p=valid(s,k);
	if(!p)
	{
			cout<<"invalid string"<<endl;
	}
    else
    {
    	cout<<"valid string"<<endl;
	}
	//5
	swap(s,k);
	cout<<endl;
	//6
	int h=checkpalindrome(s,k);
	if(h==0){
	cout<<"it's not  palindrome"<<endl;}
	else
	{
	cout<<"it's palindrome"<<endl;}
	//7
	Duplicates(s,k);
}
