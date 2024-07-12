#include <iostream>
#include<string.h>
using namespace std;
void getmaxoccurannce(string s)
{
	int arr[26]={0};
	int count=0;
	for(int i=0;i<s.length();i++)
	{
		char ch=s[i];
		if(ch>='a'&&ch<='z')
		{
			count=ch-'a';
			arr[count]++;
		}
		else if(ch>='A'&&ch<='Z')
		{
			count=ch-'A';
			arr[count]++;
		}
	}
	int ans=0;
	int max=-1;
	for(int i=0;i<26;i++)
	{
		if(arr[i]>max)
		{
		ans=i;
		max=arr[i];}
	}
	char fans='a'+ans;
	cout<<"Maximum occurance : ";
	cout<<fans;
}
int main()
{
	cout<<"enter word ";
	string s;
	cin>>s;
	getmaxoccurannce(s);
}
