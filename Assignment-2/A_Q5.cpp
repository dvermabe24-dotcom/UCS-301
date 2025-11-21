#include <iostream>
using namespace std;

int main() {
    int arr[10] = {1, 2, 3, 2, 4};
    int n = 5;

    int i = 0;
    while (i < n) {
        if (arr[i] == 2) {
            // Shift elements to the right
            for (int j = n - 1; j > i; j--) {
                arr[j] = arr[j - 1];
            }
            if (i + 1 < n) arr[i + 1] = 2; // duplicate the 2
            i++; // skip the next 2
        }
        i++;
    }

    // Print the modified array
    for (int k = 0; k < n; k++) {
        cout << arr[k] << " ";
    }

    return 0;
}
