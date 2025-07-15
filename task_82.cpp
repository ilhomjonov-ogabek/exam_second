#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "massiv uzunligini kiriting:";
    cin >> n;
    int arr[n];
    bool a = true;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]:";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            for (int i = i; i < n; i++) {
                if (arr[i] == 2) {
                    a =true;
                }else {
                     a = false;
                }
            }
        }
    }
    cout << a << endl;
    return 0;
}