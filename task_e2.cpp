#include <iostream>
using namespace std;
int main() {
    int n,num =0;
    cout << "Massiv uzunligini kiriting:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]:";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == 3 && arr[i+1] !=arr[i]) {
            num += 1;
        }
    }
    if (num == 3) {
        cout << "true" << endl;
    }else {
        cout << "false" << endl;
    }




    return 0;
}