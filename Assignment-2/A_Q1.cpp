#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 5, 3, 4, 2};
    int n = 5;
    int k = 2;
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] - arr[j] == k || arr[j] - arr[i] == k)
                count++;
        }
    }

    cout << "Pairs with difference " << k << ": " << count << endl;
    return 0;
}
