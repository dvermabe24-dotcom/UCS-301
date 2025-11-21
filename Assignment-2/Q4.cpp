#include <iostream>
#include <string>
using namespace std;


void concatStrings() {
    string s1, s2;
    cout << "Enter first string (no spaces): ";
    cin >> s1;
    cout << "Enter second string (no spaces): ";
    cin >> s2;
    string result = s1;
    for (int i = 0; i < s2.length(); i++) {
        result += s2[i];
    }
    cout << "Concatenated string: " << result << endl;
}


void reverseString() {
    string s;
    cout << "Enter a string (no spaces): ";
    cin >> s;
    cout << "Reversed string: ";
    for (int i = s.length() - 1; i >= 0; i--) {
        cout << s[i];
    }
    cout << endl;
}


void removeVowels() {
    string s;
    cout << "Enter a string (no spaces): ";
    cin >> s;
    string result = "";
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (!(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
              c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            result += c;
        }
    }
    cout << "String without vowels: " << result << endl;
}


void sortStrings() {
    int n;
    cout << "How many strings? ";
    cin >> n;
    string arr[100];
    cout << "Enter " << n << " strings:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
   
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                string temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Sorted strings:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}


void upperToLower() {
    string s;
    cout << "Enter a string in uppercase (no spaces): ";
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 65 && s[i] <= 90) {
            s[i] = s[i] + 32; 
        }
    }
    cout << "Lowercase string: " << s << endl;
}

int main() {
    int choice;
    do {
        cout << "\n=== STRING OPERATIONS MENU ===\n";
        cout << "1. Concatenate strings\n";
        cout << "2. Reverse a string\n";
        cout << "3. Remove vowels\n";
        cout << "4. Sort strings alphabetically\n";
        cout << "5. Convert uppercase to lowercase\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: concatStrings(); break;
            case 2: reverseString(); break;
            case 3: removeVowels(); break;
            case 4: sortStrings(); break;
            case 5: upperToLower(); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 6);

    return 0;
}
