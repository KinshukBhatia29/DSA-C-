#include <iostream>
#include <vector>
using namespace std;
unsigned long long factorial(int n) {
    vector<unsigned long long>dp(n+1,1);
    for (int i=2;i<=n;i++) {
        dp[i]=dp[i-1]*i;
    }
    return dp[n];
}

int main() {
    int n;
    cout << "Enter a number to find its factorial: ";
    cin >> n;
    unsigned long long fact = factorial(n);
    cout << "Factorial of "<<n<<" is: "<<fact<< endl;
}

