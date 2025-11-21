#include <iostream>
using namespace std;

struct Element {
    int row, col, val;
};

// Function to display sparse matrix (triplet form)
void display(Element arr[], int n) {
    cout << "Row Col Val\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i].row << " " << arr[i].col << " " << arr[i].val << "\n";
    }
}

// (a) Transpose of Sparse Matrix
void transpose(Element a[], int n) {
    Element t[n];
    for (int i = 0; i < n; i++) {
        t[i].row = a[i].col;
        t[i].col = a[i].row;
        t[i].val = a[i].val;
    }

    cout << "\nTranspose of matrix:\n";
    display(t, n);
}

// (b) Addition of two Sparse Matrices
void add(Element a[], int n1, Element b[], int n2) {
    Element c[n1 + n2];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (a[i].row < b[j].row || (a[i].row == b[j].row && a[i].col < b[j].col)) {
            c[k++] = a[i++];
        } else if (b[j].row < a[i].row || (b[j].row == a[i].row && b[j].col < a[i].col)) {
            c[k++] = b[j++];
        } else { // same row & col
            c[k] = a[i];
            c[k++].val = a[i++].val + b[j++].val;
        }
    }
    while (i < n1) c[k++] = a[i++];
    while (j < n2) c[k++] = b[j++];

    cout << "\nAddition Result:\n";
    display(c, k);
}

// (c) Multiplication of two Sparse Matrices
void multiply(Element a[], int n1, Element b[], int n2, int r1, int c1, int r2, int c2) {
    if (c1 != r2) {
        cout << "\nMultiplication not possible (column of A != row of B)\n";
        return;
    }

    int result[r1][c2];
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            result[i][j] = 0;

    // Multiply
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (a[i].col == b[j].row) {
                result[a[i].row][b[j].col] += a[i].val * b[j].val;
            }
        }
    }

    cout << "\nMultiplication Result (in matrix form):\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << result[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int n1, n2, r1, c1, r2, c2, choice;

    cout << "Enter rows and cols of Matrix A: ";
    cin >> r1 >> c1;
    cout << "Enter number of non-zero elements in A: ";
    cin >> n1;
    Element A[n1];
    cout << "Enter row col value for Matrix A:\n";
    for (int i = 0; i < n1; i++) cin >> A[i].row >> A[i].col >> A[i].val;

    cout << "Enter rows and cols of Matrix B: ";
    cin >> r2 >> c2;
    cout << "Enter number of non-zero elements in B: ";
    cin >> n2;
    Element B[n2];
    cout << "Enter row col value for Matrix B:\n";
    for (int i = 0; i < n2; i++) cin >> B[i].row >> B[i].col >> B[i].val;

    cout << "\nChoose Operation:\n";
    cout << "1. Transpose of A\n";
    cout << "2. Addition of A and B\n";
    cout << "3. Multiplication of A and B\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1: transpose(A, n1); break;
        case 2: add(A, n1, B, n2); break;
        case 3: multiply(A, n1, B, n2, r1, c1, r2, c2); break;
        default: cout << "Invalid choice\n";
    }

    return 0;
}
