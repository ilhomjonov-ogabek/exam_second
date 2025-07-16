#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "massiv qatorini kiriting:";
    cin >> n;
    cout << "massiv ustunini kiriting:";
    cin >> m;
    int arr1[n][m], num = 1, arr2[n][m];
    int min, max;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "arr1[" << i << "][" << j << "]:";
            cin >> arr1[i][j];
            cout << "arr2[" << i << "][" << j << "]:";
            cin >> arr2[i][j];
        }
    }
    max = arr1[0][0];
    min = arr2[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i][j] > max) {
                max = arr1[i][j];
            }
            if (arr2[i][j] < min) {
                min = arr2[i][j];
            }
        }
    }
    num = max * min;


    cout << "Natija:" << num << endl;


    return 0;
}
