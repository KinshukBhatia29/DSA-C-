#include<iostream>
#include<string.h>
using namespace std;
void swap(string s,int st,int e)
{
	while(st<e)
	{
		swap(s[st],s[e]);
		st++;
		e--;
	}

}
string reverseWords(string s) {
s.insert(s.end(),' ');   
int j=0;
     for(int i=0;i<s.length();i++){
        if (s[i] == ' ') {
            swap(s,j,i);
            j=i+1;
}
}
}
int main()
{

	string s;
	cout<<"enter name ";
	getline(cin,s);
	string rev=reverseWords(s);
	cout<<"rev string"<<rev;

}
