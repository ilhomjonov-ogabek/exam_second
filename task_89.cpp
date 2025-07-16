#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "massiv uzunligini kiriting:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i]%10 == 0) {
            arr[i] = 10;
            while (arr[i]%10 != 0) {
                arr[i] = 10;
            }
        }
        cout << arr[i] << " ";
    }
}