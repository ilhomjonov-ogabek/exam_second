#include <iostream>
using namespace std;
int main() {
    int n,num = 0;
    cout << "Massiv uzunligini kiriting:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]:";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            for (int j = i; j < n; j++) {
                if (arr[j] == 2) {
                    num++;
                }
            }
        }
    }
    if (num == 1) {
        cout << "true";
    }else {
        cout << "false";
    }



    return 0;
}