#include <iostream>
using namespace std;

void reverse(int arr[], int n) {
    int rev[100];
    for (int i = 0; i < n; i++) {
        rev[i] = arr[n - i - 1];
    }
    cout << "Reversed Array: ";
    for (int i = 0; i < n; i++) {
        cout << rev[i] << " ";
    }
    cout << endl;
}


void multiplyMatrix(int a[10][10], int b[10][10], int r1, int c1, int r2, int c2) {
    if (c1 != r2) {
        cout << "Matrix multiplication not possible!\n";
        return;
    }
    int result[10][10] = {0};
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    cout << "Result of Matrix Multiplication:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}


void transpose(int mat[10][10], int r, int c) {
    cout << "Transpose of Matrix:\n";
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            cout << mat[j][i] << " ";
        }
        cout << endl;
    }
}

int main() {
    
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    reverse(arr, n);

    
    int a[10][10] = {{1, 2, 3}, {4, 5, 6}};
    int b[10][10] = {{1, 4}, {2, 5}, {3, 6}};
    int r1 = 2, c1 = 3, r2 = 3, c2 = 2;
    multiplyMatrix(a, b, r1, c1, r2, c2);

    
    int mat[10][10] = {{1, 2, 3}, {4, 5, 6}};
    transpose(mat, 2, 3);

    return 0;
}
