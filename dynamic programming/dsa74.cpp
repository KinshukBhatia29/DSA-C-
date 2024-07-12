#include <iostream>
using namespace std;
int minCoins(int coins[], int n, int S) {
    int dp[n + 1][S + 1];
    for (int j = 0; j <= S; j++) {
        dp[0][j] = INT_MAX - 1;
    }
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 0;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= S; j++) {
            if (coins[i - 1] <= j) {
                dp[i][j] = min(dp[i - 1][j], 1 + dp[i][j - coins[i - 1]]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    return dp[n][S];
}
int main() {
    int n;
    cout << "Enter the number of denominations: ";
    cin >> n;
    int coins[n];
    cout << "Enter the denominations: ";
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    int S;
    cout << "Enter the target value: ";
    cin >> S;
    cout << "Minimum number of coins required is: " << minCoins(coins, n, S) << endl;
    return 0;
}

