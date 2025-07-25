#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Massiv uzunligini kiriting:";
    cin >> n;
    int arr[n];
    bool num = true;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
        if (arr[i] == 1 || arr[i] == 3) {
            num = false;
        }
    }
    if (num == true) {
        cout << "true";
    }else {
        cout << "false";
    }



    return 0;
}