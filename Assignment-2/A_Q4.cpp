#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 0, 1, 2, 1, 0, 0};
    int n = 7;
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            // Swap arr[low] and arr[mid]
            int temp = arr[low];
            arr[low] = arr[mid];
            arr[mid] = temp;
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else { // arr[mid] == 2
            // Swap arr[mid] and arr[high]
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high] = temp;
            high--;
        }
    }

    // Print sorted array
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}
