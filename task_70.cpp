#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Massiv uzunligini kiriting:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]:";
        cin >> arr[i];
    }
    cout << "Max-Min =" << *max_element(arr,arr+n) - *min_element(arr,arr+n) << endl;
}