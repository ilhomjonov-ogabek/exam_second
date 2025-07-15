#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "massiv uzunligini kiriting:";
    cin >> n;
    int arr[n],num = 0;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i+1] == arr[i] + 1) {
            num += 1;
        }
    }
    if (num >= 2) {
        cout << "true" << endl;
    }else {
        cout << "false" << endl;
    }
    return 0;
}