#include<iostream>
#include<string.h>
using namespace std;
bool checkequal(int a[26],int b[26])
{
	for(int i=0;i<26;i++)
	{
		if(a[i]!=b[i])
		{
			return 0;
		}
	}
	return 1;
}
void checkpermutation(string s1,string s2)
{int n;
	int c1[26]={0};
	//checking the permutation string1 
	for (int i=0;i<s1.length();i++)
	{
		int ind=s1[i]-'a';
		c1[ind]++;
	}
	// traverse s2 in window size of s1 length and compare
	int j=0;
	int windowsize=s1.length();
	int c2[26]={0};
	//checking first window
	while(j<windowsize)
	{
		int ind=s2[j]-'a';
		c2[ind]++;
	}
	n=checkequal(c1,c2);
	//checking for next window
	while(j<s2.length())
	{
		char newchar=s2[j];
		int ind=s2[j]-'a';
		c2[ind]++;
		char oldchar=s2[j-windowsize];
		ind=s2[j]-'a';
		c2[ind]--;	
		j++;
	n=checkequal(c1,c2);
	}
	if (n==1)
	cout<<"permutation is present";
	else
	cout<<"permutation is not there";
	}
	int main()
{

	string s,prt;
	cout<<"enter word ";
	getline(cin,s);
	cout<<"enter prt for permutation ";
	getline(cin,prt);
    checkpermutation(prt,s);

}
