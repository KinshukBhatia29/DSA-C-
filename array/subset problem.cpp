#include <iostream>

using namespace std;

bool subset(int set[], int n, int sum) {
    bool dp[n + 1][sum + 1];

    // Initialize the first column as true
    for (int i = 0; i <= n; i++) {
        dp[i][0] = true;
    }

    // Initialize the first row (except the first element) as false
    for (int j = 1; j <= sum; j++) {
        dp[0][j] = false;
    }

    // Fill the rest of the table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (set[i - 1] > j) {
                dp[i][j] = dp[i - 1][j];
            } else {
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - set[i - 1]];
            }
        }
    }

    return dp[n][sum];
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum;
    cout << "Enter sum: ";
    cin >> sum;

    if (subset(arr, n, sum)) {
        cout << "Found a subset with the given sum." << endl;
    } else {
        cout << "No subset with the given sum." << endl;
    }

    return 0;
}

