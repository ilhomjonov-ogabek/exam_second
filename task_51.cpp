#include <iostream>
using namespace std;

int main() {
    int n, arr[n], num = 0, num1 = 0;
    cout << "massiv uzunligini kiriting:";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "massivni " << i << " elementini kiriting:";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == 3) {
            num += 1;
            num1 += 1;
            if (arr[i - 1] != arr[i]) {
                num += 1;
            }
        }
    }

    if (num == 6 && num1 == 3) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
