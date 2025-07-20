#include <iostream>
using namespace std;

int main() {
    int n, m, max, num = 0;
    cout << "Massivni qatorlar sonini kiriting:";
    cin >> n;
    cout << "Massivni ustunlar sonini kiriting:";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "arr[" << i << "][" << j << "]:";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            num += arr[i][j];
        }
        max = num;
        if (max <= num) {
            max = num;
        }
        num = 0;
    }
    cout << "max:" << max << endl;


    return 0;
}
