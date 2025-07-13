#include <iostream>
using namespace std;

int main() {
    int n, k;
    cout << "Massiv elementlar sonini kiriting:";
    cin >> n;
    cout << "Massiv indeksini kiriting:";
    cin >> k;
    int arr[n];
    if (n > k) {
        for (int i = 0; i < n; i++) {
            cout << "arr[" << i << "]:";
            cin >> arr[i];
        }
        cout << "Natija: " <<arr[k+1] + arr[k-1];
    }else {
        cout << "Xatolik";
    }


    return 0;
}
