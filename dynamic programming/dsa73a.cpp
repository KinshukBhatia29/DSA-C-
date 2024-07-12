#include <iostream>
#include <vector>
using namespace std;
int knapsack(int W, vector<int>& weights, vector<int>& profits) {
    int n = weights.size();
    vector<vector<int> > dp(n + 1, vector<int>(W + 1, 0));
    for (int i = 1; i <= n; ++i) {
        for (int w = 1; w <= W; ++w) {
            if (weights[i - 1] <= w) {
                dp[i][w]=max(dp[i-1][w],profits[i-1]+dp[i-1][w-weights[i-1]]);
            } else {
                dp[i][w]=dp[i-1][w];
            }
        }
    }
    return dp[n][W];
}
int main() {
    int n, W;
    cout << "Enter the number of items: ";
    cin >> n;
    vector<int> weights(n);
    vector<int> profits(n);
    for (int i = 0; i < n; ++i) {
    	cout << "Enter the weight and profit of "<<i+1<<" item:"; 
        cin >> weights[i] >> profits[i];
    }
    cout << "Enter the capacity of the knapsack: ";
    cin >> W;
    int maxProfit = knapsack(W, weights, profits);
    cout << "Maximum total profit in the knapsack: " << maxProfit << endl;
    return 0;
}

