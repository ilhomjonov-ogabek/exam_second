#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Massivlar uzunligini kiriting:"; cin >> n;
    int arr1[n],arr2[n],arr3[n];
    for (int i = 0; i < n; i++) {
        cout << "1-massivni " <<i<<" elementini kiriting: "; cin >> arr1[i];
        cout << "2-massivni " <<i<<" elementini kiriting: "; cin >> arr2[i];
        arr3[i] = arr1[i] - arr2[i];
    }
    for (int i = 0; i < n; i++) {
        cout << "3-massivni " << i <<" elementi" << arr3[i] << endl;

    }


}