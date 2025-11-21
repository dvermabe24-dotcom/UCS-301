#include <iostream>
using namespace std;

void inputMatrix(int arr[10][10], int rows, int cols) {
    cout << "Enter elements of the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
}

void sumRows(int arr[10][10], int rows, int cols) {
    cout << "\nSum of each row:\n";
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
        cout << "Row " << i + 1 << ": " << sum << endl;
    }
}

void sumCols(int arr[10][10], int rows, int cols) {
    cout << "\nSum of each column:\n";
    for (int j = 0; j < cols; j++) {
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            sum += arr[i][j];
        }
        cout << "Column " << j + 1 << ": " << sum << endl;
    }
}

int main() {
    int arr[10][10], rows, cols;

    cout << "Enter number of rows and columns: \n";
    cin >> rows >> cols;

    inputMatrix(arr, rows, cols);
    sumRows(arr, rows, cols);
    sumCols(arr, rows, cols);

    return 0;
}
