#include <iostream>
#include <string.h>
using namespace std;
string compress(string s)
{
	int i=0;
	int ans=0;
	int n=s.length();
	while(i<n)
	{
		int j=i+1;
		while(j<n && s[i]==s[i+1])
		{
		j++;}
	
	//next step will be executed if character changes or new char is there
	s[ans++]=s[i];
	int c=j-i;
	if(c>1)
	{
		//converting counting into single digit and saving ans
	for(char ch: cnt)
	{
	s[ans++]=ch;	
	}
}i=j;
}
return s;	
}
int main()
{
    
	string s;
	cout<<"enter word ";
	getline(cin,s);
    cout<<compress(s);
    return 0;
}
