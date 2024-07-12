#include <iostream>
#include<string.h>
using namespace std;
string s40(string s)
{
	
	for(int i=0;i<s.length();i++)
	{
		if(s[i]==' ')
		{
		s[i]='@';	
		}
	}
cout<<s;
}
int main()
{
	cout<<"enter word";
	string s;
	getline(cin,s);
	s40(s);
}
