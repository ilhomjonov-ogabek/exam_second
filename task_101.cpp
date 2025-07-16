#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "massiv uzunligini kiriting:";
    cin >> n;
    int arr[n];
    int n1 = 0, n2 = 0, n3 = 0;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
        if (arr[i] / 10 == 0) {
            n1++;
        } else if (arr[i] / 10 > 0 && arr[i] / 10 < 10) {
            n2++;
        } else if (arr[i] / 100 > 0 && arr[i] / 100 < 10) {
            n3++;
        }
    }
    cout << n1 << "ta 1 xonali son bor" << endl;
    cout << n2 << "ta 2 xonali son bor" << endl;
    cout << n3 << "ta 3 xonali son bor" << endl;
    return 0;
}
