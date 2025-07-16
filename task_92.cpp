#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int n;
    cout <<"Massiv uzunligini kiriting;";
    cin >> n;
    int arr[n],max;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 1 ) {
            max = *max_element(arr,arr+n);
        }
        if (arr[i] == 0) {
            arr[i] = max;

        }
        cout << arr[i] << " ";
    }
    return 0;
}