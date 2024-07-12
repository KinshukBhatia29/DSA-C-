#include <iostream>
using namespace std;
void mul(int mat1[][100], int mat2[][100], int result[][100]) {
    for (int i = 0; i <10; ++i) {
        for (int j = 0; j <10; ++j) {
            result[i][j] = 0;
            for (int k = 0; k <10; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
void disp(int mat[][100]) {
    for (int i = 0; i <10; ++i) {
        for (int j = 0; j <10; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int m1[10][10], matrix2[10][10], result[10][SIZE];

    cout << "Enter elements of first matrix:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of second matrix:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            cin >> matrix2[i][j];
        }
    }

    cout << "First matrix:" << endl;
    displayMatrix(matrix1);

    cout << "Second matrix:" << endl;
    displayMatrix(matrix2);

    multiplyMatrices(matrix1, matrix2, result);

    cout << "Result of multiplication:" << endl;
    displayMatrix(result);

    return 0;
}
