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
        if (arr[i] % 2 == 1) {
            cout << arr[i]+arr[0] << endl;
        }
    }
    return 0;
}