#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[] = "listen";
    char str2[] = "silent";
    int freq1[26] = {0};
    int freq2[26] = {0};

    for (int i = 0; str1[i] != '\0'; i++) freq1[str1[i]-'a']++;
    for (int i = 0; str2[i] != '\0'; i++) freq2[str2[i]-'a']++;

    bool isAnagram = true;
    for (int i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            isAnagram = false;
            break;
        }
    }

    if (isAnagram)
        cout << "Strings are anagrams." << endl;
    else
        cout << "Strings are not anagrams." << endl;

    return 0;
}
