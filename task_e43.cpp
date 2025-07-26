#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Massiv qatorini kiriting:";
    cin >> m;
    cout << "Massiv ustunini kiriting:";
    cin >> n;
    int arr[m][n];
    int min, num = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
    for (int j = 0; j < n; j++) {
        min += arr[0][j];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            num += arr[i][j];
        }


        if (num <= min) {
            min = num;
        }
        num = 0;
    }
    cout << min << endl;
    return 0;
}
