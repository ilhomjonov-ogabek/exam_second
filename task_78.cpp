#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "N sonini kiriting;"; cin >> n;
    int a;
    cout << endl; cin >> a;
    int arr[n];
    bool result = true;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]:";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i+=2) {
        if (arr[i] == a ) {
            result = true;
        }else {
            for (int i = 1; i < n; i+=2) {
                if (arr[i] == a) {
                    result = true;
                }else {
                    result = false;
                }

            }
        }
    }
    cout << result;
    return 0;
}
