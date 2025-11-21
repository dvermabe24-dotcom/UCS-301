#include <iostream>
using namespace std;

// (a) Diagonal Matrix
void diagonalMatrix(int n) {
    int diag[n];
    cout << "Enter " << n << " diagonal elements: ";
    for (int i = 0; i < n; i++) cin >> diag[i];

    cout << "Diagonal Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) cout << diag[i] << " ";
            else cout << "0 ";
        }
        cout << "\n";
    }
}

// (b) Tri-diagonal Matrix
void triDiagonalMatrix(int n) {
    int size = 3*n - 2;
    int tri[size];
    cout << "Enter " << size << " elements (lower, diagonal, upper): ";
    for (int i = 0; i < size; i++) cin >> tri[i];

    cout << "Tri-diagonal Matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) cout << tri[n-1 + i] << " ";               // diagonal
            else if (i == j+1) cout << tri[i-1] << " ";            // lower
            else if (i+1 == j) cout << tri[2*n-1 + i] << " ";      // upper
            else cout << "0 ";
        }
        cout << "\n";
    }
}

// (c) Lower Triangular Matrix
void lowerTriangularMatrix(int n) {
    int size = n*(n+1)/2;
    int lower[size];
    cout << "Enter " << size << " elements row-wise: ";
    for (int i = 0; i < size; i++) cin >> lower[i];

    cout << "Lower Triangular Matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) cout << lower[k++] << " ";
            else cout << "0 ";
        }
        cout << "\n";
    }
}

// (d) Upper Triangular Matrix
void upperTriangularMatrix(int n) {
    int size = n*(n+1)/2;
    int upper[size];
    cout << "Enter " << size << " elements row-wise: ";
    for (int i = 0; i < size; i++) cin >> upper[i];

    cout << "Upper Triangular Matrix:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) cout << upper[k++] << " ";
            else cout << "0 ";
        }
        cout << "\n";
    }
}

// (e) Symmetric Matrix
void symmetricMatrix(int n) {
    int size = n*(n+1)/2;
    int sym[size];
    cout << "Enter " << size << " elements of lower triangle: ";
    for (int i = 0; i < size; i++) cin >> sym[i];

    cout << "Symmetric Matrix:\n";
    int k = 0;
    int mat[n][n];

    // Fill lower triangle
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            mat[i][j] = sym[k++];
        }
    }
    // Copy to upper triangle
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            mat[i][j] = mat[j][i];
        }
    }

    // Print
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }
}

// Main driver
int main() {
    int n, choice;
    cout << "Enter size of square matrix: ";
    cin >> n;

    cout << "\nChoose Matrix Type:\n";
    cout << "1. Diagonal Matrix\n";
    cout << "2. Tri-diagonal Matrix\n";
    cout << "3. Lower Triangular Matrix\n";
    cout << "4. Upper Triangular Matrix\n";
    cout << "5. Symmetric Matrix\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1: diagonalMatrix(n); break;
        case 2: triDiagonalMatrix(n); break;
        case 3: lowerTriangularMatrix(n); break;
        case 4: upperTriangularMatrix(n); break;
        case 5: symmetricMatrix(n); break;
        default: cout << "Invalid choice\n";
    }
    return 0;
}
