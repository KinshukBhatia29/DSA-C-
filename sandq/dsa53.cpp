#include <iostream>
#include <stack>
#include <string>
using namespace std;
int evaluatePostfix(const string& S) 
{
    stack<int> operands;
    int op1, op2;
    for (size_t i=0;i<S.length();i++) {
        char ch = S[i];
        if (ch==' ')
            continue;
        if (isdigit(ch)) {
            operands.push(ch-'0');
        } else {
            op2=operands.top();
            operands.pop();
            op1=operands.top();
            operands.pop();
            switch (ch) {
                case '+':
                    operands.push(op1 + op2);
                    break;
                case '-':
                    operands.push(op1 - op2);
                    break;
                case '*':
                    operands.push(op1 * op2);
                    break;
                case '/':
                    operands.push(op1 / op2);
                    break;
                default:
                    cout << "Invalid token encountered: " << ch << endl;
                    return INT_MIN;
            }
        }
    }
    if (!operands.empty())
        return operands.top();
    else {
        cout<< "NO Postfix expression " << endl;
        return INT_MIN;
    }
}
int main() {
    string str;
    cout << "Enter Postfix: ";
    getline(cin, str);
    int ans=evaluatePostfix(str);
    if (ans!=INT_MIN)
        cout << "Ans is: " << ans << endl;
    else
        cout << "Error occurred during evaluation." << endl;
}
