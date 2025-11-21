#include <iostream>
using namespace std;


int findMissingBinary(int arr[], int n) {
    int low = 0, high = n - 2; 
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == mid + 1) {
            
            low = mid + 1;
        } else {
            
            high = mid - 1;
        }
    }
    return low + 1; 
}

int main() {
    int n;
    cout << "Enter n (range 1 to n): ";
    cin >> n;

    int arr[100];
    cout << "Enter " << n - 1 << " numbers from 1 to n:\n";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int missing = findMissingBinary(arr, n);
    cout << "Missing number is: " << missing << endl;

    return 0;
}
