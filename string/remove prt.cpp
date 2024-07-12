#include<iostream>
#include<string.h>
using namespace std;
void removeocc(string s,string prt)
{
while(s.length()>0 && s.find(prt)<s.length())
{
	s.erase(s.find(prt),prt.length());
}
cout<<s;

}
int main()
{

	string s,prt;
	cout<<"enter word ";
	getline(cin,s);
	cout<<"enter prt to remove ";
	getline(cin,prt);
	removeocc(s,prt);

}
