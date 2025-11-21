#include <iostream>
using namespace std;

int main() {
    int arr[100], n;
    cout<<"Enter the number of elements :"<<endl;
    cin >> n; 
    cout<<"Enter elements :\n";
    for (int i = 0; i < n; i++){
    cin >> arr[i];
}
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                arr[j] = arr[n - 1]; 
                n--;
                j--; 
            }
        }
    }

    for (int i = 0; i < n; i++) {
	cout << arr[i] << " ";
}
}
