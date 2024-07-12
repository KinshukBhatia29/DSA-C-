#include <iostream>
#include <vector>
using namespace std;
unsigned long long fibonacci(int n) {
    if (n<=1)
        return n;
    vector<unsigned long long> dp(n + 1, 0);
    dp[1]=1;
    for (int i=2;i<=n;i++) {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}

int main() {
    int n;
    cout << "Enter the value of n to find the nth Fibonacci number: ";
    cin >> n;
    unsigned long long fib = fibonacci(n);
    cout << "Fibonacci number is: " << fib << endl;
    return 0;
}

