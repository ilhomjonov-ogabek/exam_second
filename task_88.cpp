#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Massiv uzunligini kiriting:";
    cin >> n;
    int arr[n];
    cout << "arr[0]: ";
    cin >> arr[n-1];
    for (int i = 0; i < n-1; i++) {
        cout << "arr[" << i+1 << "]: ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}