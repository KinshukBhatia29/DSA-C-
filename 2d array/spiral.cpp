#include <iostream>
using namespace std;

const int MAX_SIZE = 10;

void printSpiral(int arr[MAX_SIZE][MAX_SIZE], int m, int n) {
    int top = 0, bottom = m - 1, left = 0, right = n - 1;

    while (top <= bottom && left <= right) {
        
            for (int i = left; i <= right; ++i)
                cout << arr[top][i] << " ";
            top++;
       
       
            for (int i = top; i <= bottom; ++i)
                cout << arr[i][right] << " ";
            right--;
      
        
            for (int i = right; i >= left; --i)
                cout << arr[bottom][i] << " ";
            bottom--;
       
    
            for (int i = bottom; i >= top; --i)
                cout << arr[i][left] << " ";
            left++;
        
    }
}

int main() {
    int m, n;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;

    int arr[MAX_SIZE][MAX_SIZE];
    cout << "Enter elements of matrix:\n";
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> arr[i][j];
            for (int i = 0; i < m; ++i){
	
        for (int j = 0; j < n; ++j){
	
            cout<< arr[i][j]<<" ";}
            cout<<endl;}


    cout << "Spiral traversal of matrix: ";
    printSpiral(arr, m, n);

    return 0;
}
