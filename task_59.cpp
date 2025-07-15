#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Massiv uzunligini kiriting: ";
    cin >> n;

    int* arr1 = new int[n];
    int* arr2 = new int[n * 2]();

    for (int i = 0; i < n; i++) {
        cout << "1-massivning " << i << "-elementini kiriting: ";
        cin >> arr1[i];
    }

    arr2[(n * 2) - 1] = arr1[n - 1];

    cout << "2-massiv qiymatlari:\n";
    for (int i = 0; i < (n * 2); i++) {
        cout << arr2[i] << " ";
    }


    delete[] arr1;
    delete[] arr2;

    return 0;
}
