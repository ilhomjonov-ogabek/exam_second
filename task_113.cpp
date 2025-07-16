#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "massiv qatorini kiriting:";
    cin >> n;
    cout << "massiv ustunini kiriting:";
    cin >> m;
    int arr1[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "arr1[" << i << "][" << j << "]:";
            cin >> arr1[i][j];
        }
    }
    int min = arr1[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i][j] < min) {
                min = arr1[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr1[i][j] == min) {
                cout << i << " " << j;
            }
        }
    }


    return 0;
}
