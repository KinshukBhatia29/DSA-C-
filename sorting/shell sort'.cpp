#include <iostream>
using namespace std;
void shellSort(int arr[], int n) {
    for (int gap=n/2;gap>0;gap/=2) {
        for (int i=gap;i<n;i++){
            int j;
            for (j=i;j>=gap&&arr[j-gap]>arr[j];j-=gap)
                {
				swap(arr[j],arr[j-gap]);
        }
    }
    }
}
int main() {
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    shellSort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
