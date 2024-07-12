#include <iostream>
#include <stack>
#include <string>
using namespace std;
bool isMatchingPair(char c1, char c2)
{
    if(c1=='(' && c2==')')
        return true;
    else if(c1=='{' && c2=='}')
        return true;
    else if(c1=='[' && c2==']')
        return true;
    else
        return false;
}
bool arePB(string s) {
    stack<char> ST;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            ST.push(s[i]);
        } else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
            if (ST.empty() || isMatchingPair(ST.top(), s[i])) {
                ST.pop();
            } else {
               return false; 
            }
        }
    }
    return ST.empty();
}
int main() {
    string str;
    cout << "Enter Brackets: ";
    getline(cin, str);
    if(arePB(str)) 
	{
        cout << "Parentheses are balanced" << endl;
    } 
	else 
	{
        cout << "Parentheses are not balanced " << endl;
    }
}

