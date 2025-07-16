#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "massiv uzunligini kiriting:";
    cin >> n;
    int arr[n];
    int min;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
    min = arr[0]+arr[1];
    for (int i = 0; i < n-1; i++) {
        if (min>=arr[i]+arr[i+1]) {
            min = arr[i]+arr[i+1];
        }
    }
    cout << min << endl;
    return 0;
}
