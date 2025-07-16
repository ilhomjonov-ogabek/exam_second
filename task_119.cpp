#include <iostream>
using namespace std;
int main() {
    int n,m,num = 0;
    cout << "massiv qatorini kiriting:";
    cin >> n;
    cout << "massiv ustunini kiriting:";
    cin >> m;
    string arr[n][m];
    string str;
    cout << "str satrni kiriting:"; cin >> str;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "arr[" << i << "][" << j << "]:";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == str) {
                cout << " str satr massiv ichida qatnashgan!";
                break;
            }else {
               num++;
            }
        }
    }
    if (num == n*m) {
        cout << " str satr massiv qatnashmagan!";
    }


    return 0;
}