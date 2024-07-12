#include <iostream>

using namespace std;

struct Item {
    int weight;
    int profit;
    double ratio;
};

void swap(Item &a, Item &b) {
    Item temp = a;
    a = b;
    b = temp;
}

void sortItems(Item arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j].ratio < arr[j + 1].ratio) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

double fractionalKnapsack(int W, int weight[], int profit[], int N) {
    Item items[N];
    for (int i = 0; i < N; ++i) {
        items[i].weight = weight[i];
        items[i].profit = profit[i];
        items[i].ratio = (double)profit[i] / weight[i];
    }

    sortItems(items, N);

    double totalProfit = 0.0;
    int currentWeight = 0;

    for (int i = 0; i < N; ++i) {
        if (currentWeight + items[i].weight <= W) {
            currentWeight += items[i].weight;
            totalProfit += items[i].profit;
        } else {
            int remainingWeight = W - currentWeight;
            totalProfit += items[i].ratio * remainingWeight;
            break;
        }
    }

    return totalProfit;
}

int main() {
    int N;
    cout << "Enter the number of items: ";
    cin >> N;

    int profit[N], weight[N];
    cout << "Enter the profits of items: ";
    for (int i = 0; i < N; ++i) {
        cin >> profit[i];
    }

    cout << "Enter the weights of items: ";
    for (int i = 0; i < N; ++i) {
        cin >> weight[i];
    }

    int W;
    cout << "Enter the capacity of the knapsack: ";
    cin >> W;

    double maxProfit = fractionalKnapsack(W, weight, profit, N);

    cout << "Maximum total profit in the knapsack: " << maxProfit << endl;

    return 0;
}

