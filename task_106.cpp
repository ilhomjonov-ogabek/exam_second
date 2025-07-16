#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "massiv uzunligini kiriting:";
    cin >> n;
    int arr[n];
    int max;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
    max = arr[0]+arr[1];
    for (int i = 0; i < n-1; i++) {
        if (max<=arr[i]+arr[i+1]) {
            max = arr[i]+arr[i+1];
        }
    }
    cout << max << endl;
    return 0;
}
