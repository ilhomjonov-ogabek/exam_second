#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "1-massiv elementlar sonini kiriting:";
    cin >> n;
    cout << "2-massiv elementlar sonini kiriting:";
    cin >> m;
    int arr[n], arr1[m];
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++) {
        cout << "arr1[" << i << "]: ";
        cin >> arr1[i];
    }
    if (arr[0] == arr1[0] && arr[n - 1] == arr1[n - 1] || arr[0] == arr1[0] || arr[n - 1] == arr1[n - 1]) {
        cout << "true" << endl;
    }else {
        cout << "false" << endl;
    }


    return 0;
}
