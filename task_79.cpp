#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "MASSIV uzunligini kiriting:"; cin >> n;
    int arr[n];
    bool result = true;
    int num = 0;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]:";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == 4 && arr[i+1] == 4 || arr[i] == 2 && arr[i+1] == 2  ) {
            result = true;
            num +=1;
        }else {
            result = false;
        }

    }
    if (num == 1) {
        result = true;
    }else {
        result = false;
    }
    cout << result << endl;
    return 0;
}