#include <iostream>
using namespace std;

int MAX = 100;
int arr[100];
int n = 0;


void create() {
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}


void display() {
    if (n == 0) {
        cout << "Array is empty.\n";
        return;
    }
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void insert() {
    int pos, value;
    cout << "Enter position\n";
    cin >> pos;
    if (pos < 1 || pos > n + 1) {
        cout << "Invalid position.\n";
        return;
    }
    cout << "Enter value: ";
    cin >> value;

    for (int i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    n++;
    cout << "Element inserted.\n";
}


void deleteArray() {
    if (n == 0) {
        cout << "Array is empty. Cannot delete.\n";
        return;
    }
    int pos;
    cout << "Enter position (1 to " << n << "): ";
    cin >> pos;
    if (pos < 1 || pos > n) {
        cout << "Invalid position.\n";
        return;
    }
    for (int i = pos - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
    cout << "Element deleted.\n";
}


void linearSearch() {
    if (n == 0) {
        cout << "Array is empty.\n";
        return;
    }
    int key, found = 0;
    cout << "Enter value to search: ";
    cin >> key;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at position: " << i + 1 << endl;
            found = 1;
            break;
        }
    }
    if (!found) {
        cout << "Element not found.\n";
    }
}

int main() {
    int choice;
    while (true) {
        cout << "\n---- MENU ----\n";
        cout << "1. CREATE\n";
        cout << "2. DISPLAY\n";
        cout << "3. INSERT\n";
        cout << "4. DELETE\n";
        cout << "5. LINEAR SEARCH\n";
        cout << "6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insert(); break;
            case 4: deleteArray(); break;
            case 5: linearSearch(); break;
            case 6: cout << "Exiting program.\n"; return 0;
            default: cout << "Invalid choice. Try again.\n";
        }
    }
}
