#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Massiv uzunligini kiriting:";
    cin >> n;
    int arr[n],n1 = 0,newarr[n1];
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
        if (arr[i] % 2 == 0) {
            newarr[n1] = arr[i];
            n1++;
        }

    }
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 1) {
            newarr[n1] = arr[i];
            n1++;
        }

    }
    for (int i = 0; i < n; i++) {
        cout << newarr[i] << " ";
    }
    return 0;
}