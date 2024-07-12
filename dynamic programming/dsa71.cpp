#include <iostream>
using namespace std;

class Item {
	public:
    int profit;
    int weight;
    float profit_per_weight;
};
bool compare(Item a, Item b) {
    return a.profit_per_weight > b.profit_per_weight;
}
float fractionalKnapsack(Item items[], int n, int W) {
    for (int i = 0; i < n; i++) {
        items[i].profit_per_weight = (float)items[i].profit / (float)items[i].weight;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (items[j].profit_per_weight < items[j + 1].profit_per_weight) {
                swap(items[j], items[j + 1]);
            }
        }
    }

    float total_profit = 0.0;
    for (int i=0;i<n;i++) {
        if (items[i].weight<=W) {
            total_profit+=items[i].profit;
            W -=items[i].weight;
        } else {
            float fraction=(float)W/(float)items[i].weight;
            total_profit+=items[i].profit * fraction;
            W=0;
        }
        if (W==0) {
            break;
        }
    }
    return total_profit;
}

int main() {
    int numItems;
    cout << "Enter the number of items: ";
    cin >> numItems;
    Item *items = new Item[numItems];
    cout << "Enter weight and profit for each item:\n";
    for (int i=0;i<numItems;i++) {
        cout <<"Item "<<i+1<<" weight: ";
        cin >> items[i].weight;
        cout <<"Item "<<i+1<<" profit: ";
        cin >> items[i].profit;
    }
    int knapsackCapacity;
    cout << "Enter the capacity of the knapsack: ";
    cin >> knapsackCapacity;
    cout << "Maximum profit: " << fractionalKnapsack(items, numItems, knapsackCapacity) << endl;
    return 0;
}


