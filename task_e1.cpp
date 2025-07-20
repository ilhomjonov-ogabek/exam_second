#include <iostream>
using namespace std;
int main() {
    int n,num = 1,k1,k2;
    cout << "Massiv uzunligini kiriting:";
    cin >> n;
    cout << "1-chi chegarani kiriting:";
    cin >> k1;
    cout << "2-chi chegarani kiriting:";
    cin >> k2;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]:";
        cin >> arr[i];
    }
    if (k1<k2) {
        for (int i = k1; i <= k2; i++) {
            num *= arr[i];
        }
    }else {
        cout << "2-chegara 1chisidan katta bolishi kerak.";
    }
    cout << "kopaytma:"<<num;




    return 0;
}